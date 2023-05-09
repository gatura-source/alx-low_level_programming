#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
/**
 * err_malloc - error checked malloc
 * @mem: Dynamic mem needed
 *
 * Return: ptr or NULL
 */
void *err_malloc(unsigned int mem)
{
	void *ptr;

	ptr = malloc(mem);
	if (ptr == NULL)
	{
		exit(-1);
	}
	return (ptr);

}
/**
 * main - like normal cp
 * @argc: counter
 * @argv: vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fdin;
	int fdout;
	char *buffout;
	size_t byte_count;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	if (argc == 3)
	{
		fdin = open(argv[2], O_WRONLY | O_EXCL | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
		if (fdin == -1)
		{
			fdin = open(argv[2], O_WRONLY | O_TRUNC);
			if (fdin == -1)
			{
				dprintf(STDERR_FILENO, "Can\'t write to %s\n", argv[2]);
				exit(99);
			}
		}
		if ( (fdout = open(argv[1], O_RDONLY)) != -1)
		{
			buffout = err_malloc(sizeof(char) * 1024);
			while ((byte_count = read(fdout, buffout, sizeof(buffout))) > 0)
			{
				if (write(fdin, buffout, byte_count) == (ssize_t) -1)
				{
					dprintf(STDERR_FILENO, "Can\'t write to %s\n", argv[2]);
					exit(99);
				}
				bzero(buffout, sizeof(char) * 1024);
			}
		}
		else
		{
			dprintf(STDERR_FILENO, "Can't read from %s\n", argv[1]);
			exit(98);
		}
		free(buffout);
		if (close(fdin) != 0)
		{
			dprintf(STDERR_FILENO, "Can't close fd %i\n", fdin);
			exit(100);
		}
		if (close(fdout) != 0)
		{
			dprintf(STDERR_FILENO, "Can't close fd %i\n", fdout);
		}
	}
	return (0);
}		

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
 * usage - Usage
 * @prog: program
 *
 * Return: None
 */
void usage(char *prog)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", prog);
	exit(97);
}
/**
 * close_fd - close fds
 * @fd1: fd 1
 * @fd2: fd 2
 *
 * Return: void
 */
void close_fd(int fd1, int fd2)
{
	if (close(fd1) != 0)
	{
		dprintf(STDERR_FILENO, "can't close fd %i\n", fd1);
		exit(100);
	}
	if (close(fd2) != 0)
	{
		dprintf(STDERR_FILENO, "Can't close fd %i\n", fd2);
		exit(100);
	}
}
/**
 * main - like normal cp
 * @argc: counter
 * @argv: vector
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
		usage(argv[0]);
	}
	if (argc == 3)
	{
		fdout = open(argv[1], O_RDONLY);
		if (fdout == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from %s\n", argv[1]);
			exit(98);
		}
		fdin = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, 0664);
		if (fdin == -1)
		{
			fdin = open(argv[2], O_TRUNC | O_WRONLY);
			if (fdin == -1)
			{
				dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
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
		free(buffout);
		close_fd(fdin, fdout);
	}
	return (0);
}

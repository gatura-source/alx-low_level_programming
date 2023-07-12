#include "main.h"
/**
 * mem_alloc - error-checked malloc
 * @size: size for mem allocation
 *
 * Return: pointer or NULL
 */

void *mem_alloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
/**
 * usage - prints out err messae
 *
 * Return: void
 */
void usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}
/**
 * main - Like Standard cp
 * @argc: args counter
 * @argv: args vector
 *
 * Return: 1 on success, -1 on failure
 */

int main(int argc, char *argv[])
{
	int fd;
	int fd2;
	char *source_buffer;
	mode_t mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	size_t read_bytes;

	source_buffer = (char *)mem_alloc(sizeof(char) * 1024);
	mode = 0664;
	if (argc != 3)
	{
		usage();
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	read_bytes = 1;
	while (read_bytes)
	{
		read_bytes = read(fd, source_buffer, 1024);
		if (write(fd2, source_buffer, read_bytes) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
	return (0);
}

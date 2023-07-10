
/**
 * err_malloc - error-checked malloc
 * @memsize: size for mem allocation
 *
 * Return: pointer or NULL
 */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void *err_malloc(size_t memsize)
{
	void *ptr;

	ptr = malloc(memsize);
	if (ptr == NULL)
	{
		return (0);
	}
	return (ptr);
}
/**
 * read_textfile - reads a filename and prints out to STDOUT
 * @filename: file to read
 * @letters: No of letters to read and print
 *
 * Return: Letters read or 0 if filename NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readbytes;
	int fd;
	char *buffer;
	ssize_t r_bytes;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buffer = (char *)err_malloc(sizeof(char) * letters);
	readbytes = read(fd, buffer, letters);
	if (readbytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	r_bytes = write(STDOUT_FILENO, buffer, letters);
	if (r_bytes != (ssize_t)letters || r_bytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (readbytes);
}

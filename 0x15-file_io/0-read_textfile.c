
/**
 * err_malloc - error-checked malloc
 * @size: size for mem allocation
 *
 * Return: pointer or NULL
 */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void *err_malloc(size_t size)
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

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = (char *)err_malloc(sizeof(char) * letters);
	readbytes = read(fd, buffer, letters);
	if (readbytes == -1)
	{
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, letters) != (ssize_t)letters)
	{
		return (0);
	}
	return (readbytes);
}

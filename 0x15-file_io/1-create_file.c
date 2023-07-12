/**
 * create_file - Creates a file and adds text
 * @filename: filename
 * @text_content: text to add to created file
 *
 * Return: 1 on success, -1 on failure
 */
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int create_file(const char *filename, char *text_content)
{
	int fd;
	int strlen;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	strlen = 0;
	while (text_content[strlen] != '\0')
	{
		strlen++;
	}
	if (write(fd, text_content, strlen) == 1)
	{
		return (-1);
	}
	return (1);
}

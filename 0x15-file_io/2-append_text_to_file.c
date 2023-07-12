/**
 * append_text_to_file - appends supplied text to suplied filename
 * @filename: supplied file
 * @text_content: supplied text
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	if (write(fd, text_content, len) == -1)
	{
		return (-1);
	}
	return (1);
}

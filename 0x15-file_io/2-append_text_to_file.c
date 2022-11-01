#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of file to be appended
 * @text_content: string to be added to end of file
 * Return: 1 on success, -1 on failure or filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, sysw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = 0;
	while (text_content[len])
		len++;

	sysw = write(fd, text_content, len);
	if (sysw == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

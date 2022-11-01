#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to be created
 * @text_content: file content to be placed
 * Return: 1 on succcess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, out;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = 0;
	while (text_content[len])
		len++;

	out = write(fd, text_content, len);
	if (out == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

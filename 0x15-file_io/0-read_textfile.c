#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of file to be read and printed
 * @letters: number of letters to be read and printed
 * Return: number of letters read and printed or 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sysr, sysw;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	sysr = read(fd, buffer, letters);
	if (sysr == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	sysw = write(STDOUT_FILENO, buffer, sysr);
	if (sysw != sysr)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (sysw);
}

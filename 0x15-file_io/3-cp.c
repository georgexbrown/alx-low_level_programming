#include "main.h"

/**
 * _close - function that closes file descriptors
 * @fd: file descriptor to be closed
 * Return: Success
 */
int _close(const int fd)
{
	int exitFD;

	exitFD = close(fd);
	if (exitFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}

/**
 * copy_file - function that copies the content of a file to another file
 * @filefrom: file to be copied from
 * @fileto: file to be copied to
 * Return: Always 0 (Success)
 */
int copy_file(const char *filefrom, const char *fileto)
{
	char buffer[1024];
	int firstFD, secondFD;
	ssize_t sysRead, sysWrite;

	if (filefrom == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	firstFD = open(filefrom, O_RDONLY);
	if (firstFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}

	secondFD = open(fileto, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (secondFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		exit(99);
	}

	sysRead = read(firstFD, buffer, 1024);
	if (sysRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		_close(firstFD);
		exit(98);
	}
	while (sysRead > 0)
	{
		sysWrite = write(secondFD, buffer, sysRead);
		if (sysWrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
			_close(secondFD);
			exit(99);
		}
		sysRead = read(firstFD, buffer, 1024);
	}
	_close(firstFD);
	_close(secondFD);
	return (0);
}

/**
 * main - Main entry
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char **argv)
{
	int resp;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	resp = copy_file(argv[1], argv[2]);
	return (resp);
}

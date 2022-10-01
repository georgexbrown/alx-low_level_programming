#include <stdio.h>

/**
 * main - Program that prints its name
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

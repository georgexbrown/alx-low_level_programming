#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the number of arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *list;

	printf("%d\n", argc);
	if (argc == 500)
	{
		list = argv[argc];
		printf("I dun tire = %s\n", list);
	}
	return (0);
}

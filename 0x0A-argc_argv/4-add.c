#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints all arguments with a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success) or 1 (Failure)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int i, j, sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

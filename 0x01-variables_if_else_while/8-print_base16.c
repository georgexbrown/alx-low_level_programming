#include <stdio.h>

/**
 * main - Prints all decimal numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

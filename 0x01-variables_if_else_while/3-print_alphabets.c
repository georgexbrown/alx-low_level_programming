#include <stdio.h>

/**
 * main - Print alphabet in small letters
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char i, j;

	i = 'a';
	j = 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

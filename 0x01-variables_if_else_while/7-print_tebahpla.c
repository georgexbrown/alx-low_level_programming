#include <stdio.h>

/**
 * main - Print alphabet in small letters
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}

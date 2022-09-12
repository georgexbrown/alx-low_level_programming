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
	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

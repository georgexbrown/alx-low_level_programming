#include <stdio.h>

/**
 * main - Print alphabet in lowercase except e and q
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
		if (i == 'e' || i == 'q')
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}

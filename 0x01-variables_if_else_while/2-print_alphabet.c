#include <stdio.h>

/**
 * main - Print alphabet in small letters
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}

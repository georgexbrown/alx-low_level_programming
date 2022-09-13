#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Printing all combinations of single-digit number
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Printing all combinations of three-digit numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && i < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

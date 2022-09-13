#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description - Printing all combinations of double two-digit numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; k <= 57; l++)
				{

				if (((k + l) > (i + j) && k >= i) || i < k)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					if (i + j + k + l == 227 && i == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

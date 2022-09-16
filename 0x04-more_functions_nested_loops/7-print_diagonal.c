#include "main.h"

/**
 * print_diagonal - Draws a diagonal line across the screen
 *@n: integer parameter that returns no value
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < i)
					_putchar(' ');
				else if (j == i)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}


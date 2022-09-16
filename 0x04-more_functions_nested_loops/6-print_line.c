#include "main.h"

/**
 * print_line - Draws a straight line across the screen
 * @n: integer parameter but doesn't return a value
 *
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		while (i = 0; i <= n; i++)
		{	
			_putchar('_');
		}
		_putchar('\n');
	}
}

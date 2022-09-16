#include "main.h"

/**
 * print_line - Draws a straight line across the screen
 * @n: integer parameter but doesn't return a value
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{	
			_putchar('_');
			i++;
		}
	}
}

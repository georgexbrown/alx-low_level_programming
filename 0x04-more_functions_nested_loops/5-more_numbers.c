#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, x;

	for (i = 1; i < 11; i++)
	{
		x = 0;
		while (x < 15)
		{
			_putchar(x + '0');
			x++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}

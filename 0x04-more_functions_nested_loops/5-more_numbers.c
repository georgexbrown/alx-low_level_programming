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
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}

			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 *
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		i++;
		_putchar(i);
	}
	_putchar('\n');
}

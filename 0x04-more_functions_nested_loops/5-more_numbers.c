#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, x;

	i = 0;
	while (i < 10)
	{
		x = 0;
		while (x < 15)
		{
			putchar(x + '0');
			x++;
		}
		i++;
		putchar('\n');
	}
	putchar('\n');
}

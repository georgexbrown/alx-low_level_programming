#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 omitting 2 and 4
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 4)
		{
			putchar(i + '0');
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
}

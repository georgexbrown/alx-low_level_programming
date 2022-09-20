#include "main.h"

/**
 * puts2 - Function that prints every other character of a string
 * @str: character pointer parmeter
 *
 */
void puts2(char *str)
{
	int x = 0;

	while (x >= 0)
	{
		if (str[x] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
}

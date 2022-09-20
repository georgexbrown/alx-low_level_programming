#include <string.h>
#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: Character pointer parameter
 */
void print_rev(char *s)
{
	int count = 0, a, b;
	char *x, n;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;

		count++;
	}

	x = s;
	for (a = 0; a < (count - 1); a++)
	{
		for (b = a + 1; b > 0; b++)
		{
			n = *(x + b);
			*(x + b) = *(x + (b - 1));
			*(x +(b - 1)) = n;
		}
	}
}

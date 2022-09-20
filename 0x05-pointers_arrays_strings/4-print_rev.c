#include <string.h>
#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: Character pointer parameter
 */
void print_rev(char *s)
{
	int i, len;
	char *a, *b, x;

	len = strlen(s);
	a = s;
	b = s;
	for (i = 0; i < len - 1; i++)
		b++;

	for (i = 0; i < len / 2; i++)
	{
		x = *s;
		*b = *a;
		*a = x;

		a++;
		b--;
	}
}

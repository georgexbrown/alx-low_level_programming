#include <string.h>
#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: Character pointer parameter
 */
void print_rev(char *s)
{
	int i, len, x;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		x = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = x;
	}
}

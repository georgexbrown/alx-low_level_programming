#include <stdlib.h>
#include "main.h"

/**
 * _atoi - Function that converts a string to integer
 * @s: Character pointer parameter
 *
 * Return: an integer type
 */
int _atoi(char *s)
{
	int c, i;

	c = 0;
	while (s[c] != '\0')
	{
		if (s[c] >= '1' && s[c] <= '9')
		{
			i = atoi(s[c]);
		}
		c++;
	}
	return (c);
}

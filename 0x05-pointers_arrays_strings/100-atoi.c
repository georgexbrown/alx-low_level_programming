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
	int i;

	while (s != '\0')
	{
		if (s >= '1' && s <= '9')
		{
			i = atoi(s);
		}
		s++;
	}
	return (i);
}

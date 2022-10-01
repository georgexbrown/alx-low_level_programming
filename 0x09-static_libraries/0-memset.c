#include <string.h>
#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Character pointer to the block of memory to fill
 * @b: Value to be set
 * @n: The number of bytes to set to the value
 * Return: Character pointer *d to return value
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *d;

	d = memset(s, b, n);
	return (d);
}

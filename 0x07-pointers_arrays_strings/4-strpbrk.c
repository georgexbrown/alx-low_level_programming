#include <string.h>
#include "main.h"

/**
 * _strpbrk - Function that searches for characters of any set of byte
 * in a string
 * @s: Pointer to be scanned
 * @accept: Pointer containing characters to match with pointer *s
 * Return: Character pointer *d returns the scanned string
 */
char *_strpbrk(char *s, char *accept)
{
	char *d;

	d = strpbrk(s, accept);
	return (d);
}

#include <string.h>
#include "main.h"

/**
 * _strchr - Function that locates the first occurence of a character
 * in a string
 * @s: Character pointer, string to be searched
 * @c: Character parameter to search for in pointer *s
 * Return: Character pointer *d returns string
 */
char *_strchr(char *s, char c)
{
	char *d;

	d = strchr(s, c);
	return (d);
}

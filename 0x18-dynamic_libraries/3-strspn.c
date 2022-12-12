#include <string.h>
#include "main.h"

/**
 * _strspn - Function that gets lenth of a prefix substring
 * @s: Character pointer to be scanned
 * @accept: Character pointer containing the characters to match
 * Return: Integer pointer that returns number of characters of *accept in *s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);
	return (n);
}

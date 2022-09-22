#include <string.h>
#include "main.h"

/**
 * _strncpy - Function that copies strings
 * @dest: character pointer parameter that copies string src
 * @src: character pointer parameter that copies string dest
 * @n: integer parameter that represent the length of string to be copied
 * Return: Pointer *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src);
	return (dest);
}

#include <string.h>
#include "main.h"

/**
 * _strcat - Function that concatenates strings
 * @dest: character pointer parameter that concatenates with src
 * @src: character pointer parameter that concatenates with dest
 * Return: Pointer *dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

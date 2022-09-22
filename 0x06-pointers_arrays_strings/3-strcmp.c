#include <string.h>
#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: Character pointer parameter to be compared with s2
 * @s2: Character pointer parameter to be compared with s1
 * Return: integer variable 'res'
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	res = strcmp(s1, s2);
	return (res);
}

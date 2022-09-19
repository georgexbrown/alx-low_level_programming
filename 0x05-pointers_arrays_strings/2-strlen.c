#include "main.h"
#include <string.h>

/**
 * _strlen - Function that counts the length of a string
 * @s : Character pointer parameter that returns the value of string length
 * 
 * Return : An integer of value of length of string
 *
 */
int _strlen(char *s)
{
	int n;
	char length;

	n = 0;
	length = *s;
	n = strlen(length);
	return (n);
}

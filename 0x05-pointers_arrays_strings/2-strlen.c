#include <string.h>
#include "main.h"
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

	n = 0;
	n = strlen(*s);
	return (n);
}

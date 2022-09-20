#include <string.h>
#include "main.h"

/**
 * _strlen - Function that counts the length of a string
 * @s : Character pointer parameter that returns the value of string length
 * char : Value type gotten from main
 * Return: n,  integer variable that holds value of length of string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	n = strlen(s);
	return (n);
}

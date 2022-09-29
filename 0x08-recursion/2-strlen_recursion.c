#include "main.h"

/**
 * _strlen_recursion - Function that prints length of string using recursion
 * @s: Character pointer parameter *s that holds the string
 * Return: Integer parameter 'i'  with length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return(1 + _strlen_recursion(++s));
}

#include "main.h"

/**
 * _strlen_recursion - Function that prints length of string using recursion
 * @s: Character pointer parameter *s that holds the string
 * Return: Integer parameter 'i'  with length of string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (s[i] == '\0')
	{
		return (i);
	}
	i++;
	i = i + _strlen_recursion(++s);
	return (i);
}

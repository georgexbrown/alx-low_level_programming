#include "main.h"

/**
 * _print_rev_recursion - Functions that reverses a string in recursion
 * @s: Character pointer that holds the string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

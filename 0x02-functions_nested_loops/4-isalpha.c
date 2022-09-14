#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter with int type
 *
 * Description - function that returns 1 when true and 0 when false
 *
 * Return: 0 if it's false and 1 if it's true
 *
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

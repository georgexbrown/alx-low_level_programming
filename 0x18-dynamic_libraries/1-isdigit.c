#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks if an entry is a digit and returns value
 * @c: int type parameter
 * Return: 1 if digit while 0 if not
 *
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

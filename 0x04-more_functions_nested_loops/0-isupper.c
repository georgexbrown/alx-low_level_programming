#include <ctype.h>
#include "main.h"

/**
 * _isupper - detects if an integer is upper and retuns value
 * @c: parameter with int type
 *
 * Return: 1 if true and 0 if false
 *
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


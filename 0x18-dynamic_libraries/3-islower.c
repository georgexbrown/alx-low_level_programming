#include <ctype.h>
#include "main.h"

/**
 * _islower - detects if an integer is lower and retuns value
 * @c: parameter with int type
 *
 * Return: 1 if true and 0 if false
 *
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

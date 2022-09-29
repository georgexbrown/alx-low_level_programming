#include "main.h"

/**
 * _pow_recursion - Function that returns the value of a number raised
 * to a power of a given number
 * @x: Base number (integer)
 * @y: Power of x to be raised (integer)
 * Return: The value of the function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (-x * _pow_recursion(x, (y - 1)));
}

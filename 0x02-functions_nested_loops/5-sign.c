#include "main.h"

/**
 * print_sign - Prints sign of numbers (ASCII)
 * @n: parameter n with integer args
 *
 * Return: 1 if n is > zero, 0 if n is zero and -1 if n is < zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

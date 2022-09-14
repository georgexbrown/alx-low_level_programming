#include "main.h"

/**
 * print_last_digit - displays last digit of a given integer
 * @n:  int type parameter
 *
 * Description: prints last digit of any number and returns last digit
 *
 * Return: Value of last digit
 *
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;

	x = n % 10;

	if (x < 0)

		x = -x;

	_putchar(x + '0');
	return (x);
}

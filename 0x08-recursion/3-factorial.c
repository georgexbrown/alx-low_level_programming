#include "main.h"

/**
 * factorial - Function that calculates FACTORIAL of a given number
 * @n: integer parameter that stores the number to be factored
 * Return: Factorial of given number is returned and -1 is returned if
 * number is less than 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n *= factorial(n - 1));
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: 0 if n == 0; sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	int i = 0, sum = 0;

	if (n == 0)
		return (0);

	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

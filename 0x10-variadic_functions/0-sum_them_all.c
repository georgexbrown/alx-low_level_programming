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
	int i, sum = 0;

	if (n <= 0)
		return (0);
	
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

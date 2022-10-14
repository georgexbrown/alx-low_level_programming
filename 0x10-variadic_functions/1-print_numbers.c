#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers with a separator
 * @separator: string to separate numbers
 * @n: numbers of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}

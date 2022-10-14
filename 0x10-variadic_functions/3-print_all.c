#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments to be passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list allThings;
	int i = 0, check;
	char *str;

	va_start(allThings, format);
	while (format != NULL && format[i] != '\0')
	{
		check = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(allThings, int));
				break;
			case 'i':
				printf("%d", va_arg(allThings, int));
				break;
			case 'f':
				printf("%f", va_arg(allThings, int));
				break;
			case 's':
				str = va_arg(allThings, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				check = 1;
				break;
		}
		if (check == 0 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(allThings);
	printf("\n");
}

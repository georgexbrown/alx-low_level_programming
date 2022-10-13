#include "function_pointers.h"

/**
 * print_name - funtion that prints a name
 * @name: parameter passed from main
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

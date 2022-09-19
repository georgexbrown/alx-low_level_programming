#include "main.h"

/**
 * swap_int - Function that switches the value of variable a with b
 * @a: integer pointer parameter
 * @b: integer pointer parameter
 *
 */
void swap_int(int *a, int *b)
{
	int a, b;

	*a = &b;
	*b = &a;
}

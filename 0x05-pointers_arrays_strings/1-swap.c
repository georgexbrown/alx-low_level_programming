#include "main.h"

/**
 * swap_int - Function that switches the value of variable a with b
 * @a: integer pointer parameter
 * @b: integer pointer parameter
 *
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = 0;
	d = 0;
	c = *b;
	d = *a;
	*a = c;
	*b = d;
}

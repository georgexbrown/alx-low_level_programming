#include "main.h"

/**
 * reverse_array - Function that reverses an array
 * @a: Integer pointer parameter that represents the array
 * @n: Integer parameter that represents number of items in array
 *
 */
void reverse_array(int *a, int n)
{
	int aux[n];
	int i;

	for (i = 0; i < n; i++)
	{
		aux[n] = a[i];
		a[n - 1 - i] = aux[n];
	}
}

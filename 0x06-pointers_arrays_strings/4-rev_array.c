#include "main.h"

/**
 * reverse_array - Function that reverses an array
 * @a: Integer pointer parameter that represents the array
 * @n: Integer parameter that represents number of items in array
 *
 */
void reverse_array(int *a[], int n)
{
	int aux[5];
	int i;

	for (i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = aux[i];
		printf("%d ", a[i]);
	}
}

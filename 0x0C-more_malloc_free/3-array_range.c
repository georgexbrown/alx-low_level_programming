#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum number of elements in array
 * @max: maximum number of elements in array
 * Return: NULL if min > max, if malloc fails, pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i, n;
	int *arr;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}

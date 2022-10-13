#include <stdio.h>

/**
 * array_iterator - function thats executes a function given as aparameter
 * on each element of an array
 * @array: array to be passed
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

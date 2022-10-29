#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to unsigned long integer passed
 * @index: index of bit
 * Return: 1 if works or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	if (*n & x)
		*n ^= x;

	return (1);
}

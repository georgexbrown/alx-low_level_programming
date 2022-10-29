#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: unsigned long integer
 * @m: unsigned long integer
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	for (num = 0; n || m; n >> 1, m >> 1)
	{
		if ((n & 1) != (m & 1))
			num++;
	}
	return (num);
}

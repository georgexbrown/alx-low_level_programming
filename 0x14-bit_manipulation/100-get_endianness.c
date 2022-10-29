#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 0x1234567;

	char *y = (char *) &x;

	if (*y)
		return (1);
	else
		return (0);
}

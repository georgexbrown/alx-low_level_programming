#include <string.h>
#include "main.h"

/**
 * _memcpy - Functions that copies memory area
 * @dest: Pointer with type void to the destination array 
 * where content is to be copied
 * @src: Pointer to the source of data to be copied from
 * @n: Number of bytes to be copied from src
 * Return: Character pointer *d returns value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d;

	d = memcpy(dest, src, n);
	return (d);
}

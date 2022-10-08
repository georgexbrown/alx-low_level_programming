#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with a call
 * @old_size: size of allocated space for ptr
 * @new_size: size of the new memory block
 * Return: ptr, if new equals old; NULL, if new = 0 && ptr != NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *o = ptr;
	unsigned int i, n = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = o[i];

	free(ptr);
	return (p);
}

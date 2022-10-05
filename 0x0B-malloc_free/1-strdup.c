#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: Character pointer paramater that holds the string
 * Return: A pointer to the duplicated string or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *a;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	a = malloc(i * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}
	return (a);
}

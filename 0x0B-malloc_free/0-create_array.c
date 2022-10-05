#include <stdlib.h>

/**
 * create_array - Function that creates arrays of characters
 * and initializes it with a special character
 * @size: Unsigned integer parameter that contans size of allocated space
 * @c: Character parameter of which is size is to be computed
 * Return: A pointer to the array or NULL if size is 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

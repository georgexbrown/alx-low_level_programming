#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: First string
 * @s2: Second string to concatenate with s1
 * Return: Pointer to newly concatenated string memory space or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *str;

	if (s1 == NULL)
		i = 0;
	if (s2 == NULL)
		j = 0;

	k = i + j + 1;
	str = malloc(k * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		str[l] = s1[l];

	for (l = 0; l < j; l++)
		str[l + i] = s2[l];

	str[i + j] = '\0';
	return (str);
}

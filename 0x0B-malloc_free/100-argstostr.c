#include <stdlid.h>

/**
 * argstostr - Function that concatenates arguments of a program
 * @ac: Argument count
 * @av: Argument vector
 * Return: NULL if it fails; if ac is 0; av is NULL or a pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}
	n++;
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}

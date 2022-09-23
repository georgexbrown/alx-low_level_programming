#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @s: String to be encoded
 * Return: Char *
 */
char *leet(char *s)
{
	int i = 0, j;
	int lowercase[] = {97};
	int uppercase[] = {};
	int num = {};

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == lowercase[j] || *(s + i) == uppercase[j])
			{
				*(s + i) = num[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

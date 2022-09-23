#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @s: String to be encoded
 * Return: Char *
 */
char *leet(char *s)
{
	int i = 0, j;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

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

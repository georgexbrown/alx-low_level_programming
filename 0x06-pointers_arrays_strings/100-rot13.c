#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13
 * @s: Character pointer parameter
 * Return: Char *s
 */
char *rot13(char *s)
{
	int i = 0, j;
	int alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLMN";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 53; j++)
		{
			if (*(s + i) == alphabet[j])
			{
				*(s + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

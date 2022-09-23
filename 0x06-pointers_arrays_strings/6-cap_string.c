#include "main.h"

/**
 * cap_string - Function to capitalize strings
 * @c: Character pointer parameter
 * Returns: c character
 */
char *cap_string(char *c)
{
	int i = 0, j;
	int separator[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(c + i) >= 97 && *(c + i) <= 122)
		*(c + i) = *(c + i) - 32;
	i++;
	while (*(c + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(c + i) == separator[j])
			{
				if (*(c + (i + 1)) >= 97) && (*(c + (i + 1)) <= 122)
					*(c + (i + 1)) = *(c + (i + 1)) - 32;
				break;
			}
		}
		i++;
	}
	return (c);
}

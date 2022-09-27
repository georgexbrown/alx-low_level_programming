#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: Character pointer array that holds the strings
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < sizeof(a); i++)
	{
		for (int j = 0; j < sizeof(a); j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n')
	}
}

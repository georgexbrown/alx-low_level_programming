#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: Character pointer array that holds the strings
 */
void print_chessboard(char (*a)[8])
{
	for (unsigned int i = 0; i < 8; i++)
	{
		for (unsigned int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

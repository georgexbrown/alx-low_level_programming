#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet
 */
void print_alphabet_x10(void)
{
	int ch, i;

	i = 1;
	ch = 'a';
	while (i <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

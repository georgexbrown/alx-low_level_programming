#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet
 */
void print_alphabet_x10(void)
{
	int ch, i;

	i = 1;
	while (i <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}

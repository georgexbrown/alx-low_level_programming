#include "main.h"

/**
 * jack_bauer - Prints every minute in 24 hours
 * Description: 24 hour Clock by minutes
 *
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (j <= 23)
	{
		while (i <= 59)
		{
			_putchar(0 + (j / 10));
			_putchar(0 + (j % 10));
			_putchar(':');
			_putchar(0 + (i / 10));
			_putchar(0 + (i % 10));
			_putchar('\n');
			i++;
		}
		i = 0;
		j++;
	}
}


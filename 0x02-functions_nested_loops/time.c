#include <stdio.h>

int main(void)
{
	int i, j;

        i = 0;
        j = 0;
        while (j <= 23)
	{
		while (i <= 59)
		{
			printf("%02d:%02d\n", j, i);
			i++;
		}
		i = 0;
		j++;
	}
	return (0);
}


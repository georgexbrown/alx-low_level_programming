#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints all arguments with a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success) or 1 (Failure)
 */
int main(int argc, char *argv[])
{
	int cent, no_ofCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	while (cent > 0)
	{
		no_ofCoins++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", no_ofCoins);
	return (0);
}

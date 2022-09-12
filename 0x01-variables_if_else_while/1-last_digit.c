#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Finding last digit of random number
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("%s%d\n Last digit of ", n, " is ", lastdigit, " and is greater than 5");
	}
	else if (lastdigit <= 5)
	{
		printf("%s%d\n Last digit of ", n, " is ", lastdigit, " and is less than 6 and not 0");
	}
	else
	{
		printf("%s%d\n Last digit of ", n, " is ", lastdigit, " and is 0");
	}
	return (0);
}

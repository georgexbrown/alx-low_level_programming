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
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else if (x <= 5 && x != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	return (0);
}

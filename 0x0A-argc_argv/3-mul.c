#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints all arguments with a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success) or 1 (Failure)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int firstNumber, secondNumber, sumProduct;

	if (argc == 3)
	{
		firstNumber = atoi(argv[1]);
		secondNumber = atoi(argv[2]);
		sumProduct = firstNumber * secondNumber;
		printf("%d\n", sumProduct);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

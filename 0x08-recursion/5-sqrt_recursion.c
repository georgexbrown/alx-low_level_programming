#include "main.h"

/**
 * square_root - function that finds square root of numbers
 * @n: test n
 * @root: the actual root to be determined
 * Return: natural root or -1 if no such
 */


int square_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (square_root(n, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number whose sqrt is to be determined
 * Return: -1 when n has no root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}

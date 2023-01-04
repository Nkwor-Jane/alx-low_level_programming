#include "main.h"

/**
 * _sqrt_recursion - function returns the square root of a number
 * @n: base number
 * Return: natural number square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_root(1, n));
}

/**
 * _sqrt_root - function that returns square root
 * @x: first value
 * @y: square root value
 * Return: square root
 */

int _sqrt_root(int x, int y)
{
	if (x > y)
		return (-1);
	else if (x * x == y)
		return (x);
	return (_sqrt_root(x + 1, y));
}

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - funtction that returns addition of two intergers
 * @a: first integer
 * @b: second integer
 * Return: sum of integers
 */


int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract two integers
 * @a: integer 1
 * @b: integer 2
 * Return: value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multipleies two integers
 * @a: integer 1
 * @b: integer 2
 * Return: value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: integer 1
 * @b: integer 2
 * Return: value
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that finds remainder of two integers
 * @a: integer1
 * @b: integer 2
 * Return: value
 */

int op_mod(int a, int b)
{
	return (a % b);
}

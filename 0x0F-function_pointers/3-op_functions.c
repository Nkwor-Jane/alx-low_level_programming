#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - funtction that returns addition of two intergers
 * op_sub - function that subtracts two intergers
 * op_mul - function that multiplies two integers
 * op_div - function that divides two integers
 * op_mod - modulus of two integers
 * @a: first integer
 * @b: second integer
 */


int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}

#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest_number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	/* a should be greater than both b and c */
	if (a >= b && a >= c)
	{
		largest = a;
	}
	/* b should be greater than both a and c*/
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	/* c should both be greater than a and b*/
	else if (c >= a && c >= b)
	{
		largest = c;
	}
	
	return (largest);
}

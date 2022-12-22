#include <stdio.h>
#include "main.h"

/**
 * print_number - function that prints integer
 * @n: integer
 * Return interger
 */

void print_number(int n)
{
	int result, temp, exp;

	exp = 1;
	if (n >= 0)
		result = n * -1;
	else
	{
		result = n;
		_putchar('-');
	}

	temp = result;
	while (temp <= -10)
	{
		exp *= 10;
		temp /= 10;
	}
	while (exp >= 1)
	{
		_putchar(((result / exp) % 10) * -1 + '0');
				exp /= 10;
	}
}

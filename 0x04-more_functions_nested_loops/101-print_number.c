#include "main.h"

/**
 * print_number - prints number
 * @n: number
 * Return: nothing
 */

void print_number(int n)
{
	long length, result, temp, expr, i;

	result = n;
	expr = length = 1;

	if (result < 0)
	{
		result *= -1;
		_putchar('-');
	}

	temp = result;
	while (temp >= 10)
	{
		length++;
		temp /= 10;
	}

	for (i = 1; i < length; i++)
		expr *= 10;
	while (expr > 1)
	{
		_putchar((result / expr) % 10 + '0');
		expr /= 10;
	}
	_putchar(result % 10 + '0');
}


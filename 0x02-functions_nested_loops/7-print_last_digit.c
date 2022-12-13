#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: digit
 * Return: vlaue of last digit
 */
int print_last_digit(int n)
{
	int val;

	if (n < 0)
		val = -1 * (n % 10);
	else
		val = n % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}

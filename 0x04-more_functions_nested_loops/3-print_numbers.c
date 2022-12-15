#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 * _putchar - print numbers
 * Return: nothing
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}

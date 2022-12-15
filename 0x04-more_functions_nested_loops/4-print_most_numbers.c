#include "main.h"

/**
 * print_most_numbers - print numbers from 0-9
 * except 2 and 4
 * _putchar - print numbers
 * Return: nothing
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_line - draw straight line
 * @n: number of times _is printed
 * _putchar - print result
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
		_putchar('\n');
}

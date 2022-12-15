#include "main.h"

/**
 * print_diagonal - print diagonal characters
 * @n: number of times _is printed
 * _putchar - print result
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
		_putchar('\n');
}

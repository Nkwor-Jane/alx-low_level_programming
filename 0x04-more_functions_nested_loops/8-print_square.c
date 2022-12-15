#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 * _putchar - print result
 * Return: 0
 */
void print_size(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}

#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int i, j, z;

	for (i = 0;
			i <= 9;
			i++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = i * j;
			if ((z / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(z + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}


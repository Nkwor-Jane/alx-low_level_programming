#include <stdio.h>
/**
 * main - Entry point
 *
 * Print numbers from 00 to 99
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	while (i <= '0')
	{
		while (j <= '9')
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
	return (0);
}

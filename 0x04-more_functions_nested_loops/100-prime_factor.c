#include <stdio.h>

/**
 * main - finds and prints largest prime factor
 * Return: 0
 */

int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (i = 1; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}

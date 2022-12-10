#include <stdio.h>
/**
 * main - Entry point
 *
 * Print numbers with putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int numberz;

	for (numberz = '0'; numberz <= '9'; numberz++)
	{
		putchar(numberz);
	}
	putchar('\n');
	return (0);
}

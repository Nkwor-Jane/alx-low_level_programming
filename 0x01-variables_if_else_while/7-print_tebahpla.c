#include <stdio.h>
/**
 * main - Entry point
 *
 * Print lowercase letters in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}

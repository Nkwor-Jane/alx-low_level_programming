#include <stdio.h>
/**
 * main - Entry point
 * Prints alphabet in lowercase
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}

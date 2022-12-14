#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10x
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letters;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
			_putchar('\n');
	}
}

#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: character
 * Return: 0
 */

int _putchar(char c)
{
	write(1, &c, 1);
}

#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 * Return: 1
 * on error: return -1
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}

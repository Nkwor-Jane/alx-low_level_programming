#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 * Return: 1 on success
 */

int _putchar(c)
{
	return (write(1, &c, 1));
}

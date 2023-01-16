#include <unistd.h>

/**
 * _putchar - print character to stdout
 * @c: character
 * Return: nothing
 */
int _putchar(char c)
{
	return (write(1, &c,1));
}

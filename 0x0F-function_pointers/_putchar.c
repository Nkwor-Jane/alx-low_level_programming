#include <unistd.h>

/**
 * _putchar - function to print character to stdout
 * @c: character
 * Returen: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

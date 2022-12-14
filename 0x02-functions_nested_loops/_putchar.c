#include <unistd.h>
/**
 * _putcar - writes c to stdout
 * @c: characted to print
 *
 * Return: 0
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

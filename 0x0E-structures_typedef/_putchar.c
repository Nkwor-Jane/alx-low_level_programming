#include <unistd.h>

/**
 * main - print character to stdout
 * @c: character
 * Return: always 0
 */

int main(void)
{
	return (write(1, &c, 1));
}

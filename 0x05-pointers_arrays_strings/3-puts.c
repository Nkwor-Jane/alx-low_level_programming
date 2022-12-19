#include "main.h"
/**
 * _puts - prints string follwed by new line
 * @str: the string
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

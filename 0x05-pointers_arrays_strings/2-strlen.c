#include "main.h"
/**
 * _strlen - returns length of string
 * @s: the string
 * Return: length
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}

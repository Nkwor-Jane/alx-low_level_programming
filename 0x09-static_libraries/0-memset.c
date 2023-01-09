#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: bytes of memory area
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *first = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (first);
}

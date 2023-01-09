#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area, destination
 * @src: memory area, source
 * @n: bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *first = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest;
	}
	return (first);
}

#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: another string
 * Return: pinter to the bytes s that matches bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *first = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = first;
		s++;
	}
	return (NULL);
}

#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function thatsearches a string for any of a set of bytes
 * @s: initial string
 * @accept: bytes to be accepted
 * Return: pointer to number of bytes
 */
char  *_strpbrk(char *s, char *accept)
{
	char *first = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			 accept++;
		}
		accept = first;
		s++;
	}
	return (NULL);
}

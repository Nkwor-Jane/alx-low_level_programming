#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}

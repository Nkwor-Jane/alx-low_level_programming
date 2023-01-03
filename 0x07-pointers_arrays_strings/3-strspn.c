#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets length of a prefix string
 * @s: initial segment
 * @accept: btyes to be accepted
 * Return: pointer to number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, sign;
	char *first = accept;

	while (*s)
	{
		sign = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				sign = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = first;
		if (sign == 0)
			break;
	}
	return (count);
}

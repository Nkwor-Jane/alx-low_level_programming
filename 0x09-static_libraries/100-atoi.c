#include "main.h"
#include <limits.h>

/**
 * _atoi - function to convert string to integer
 * @s: string
 * Return: i
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int i = 0;
	char base = 0;

	while (*s)
	{
		if (sign < 0)
		i *= -1;
		if (*s >= '0' && *s <= '9')
		{
			base = 1;
			i = i *10 + *s - '0';
		}
		else if (base)
			break;
		i++;
	}
	return (i);
}

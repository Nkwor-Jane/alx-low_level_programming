#include "main.h"

/**
 * string_toupper - function that changes lowercase
 * letters to uppsercase in a string
 * @c: lowercase string
 * Return: c
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = 'a' - 'A';
			i++;
	}
	return (c);
}

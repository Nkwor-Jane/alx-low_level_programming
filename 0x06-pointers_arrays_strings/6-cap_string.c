#include "main.h"

/**
 * cap_string - function that changes lowercase
 * words to uppsercase in a string
 * @c: lowercase string
 * Return: c
 */

char *cap_string(char *c)
{
	int i, j;
	char tabs[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= ('a' - 'A');
	while (c[i] != '\0')
	{
		for (j = 0; tabs[j] != '\0'; j++)
		if (c[i - 1] == tabs[j] && (c[i] >= 'a' && c[i] <= 'z'))
			c[i] -= 'a' - 'A';
			i++;
	}
	return (c);
}

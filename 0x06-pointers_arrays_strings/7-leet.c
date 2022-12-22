#include "main.h"
/**
 * leet - function that encodes a string
 * @c: string
 * Return: string
 */

char *leet(char *c)
{
	int i, j;
	char enc[] = "aAeEoOtTlL";
	char sub[] = "43071";
	
	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; enc[j] != '\0'; j++)
			if (c[i] == enc[j])
				c[i] = sub[j / 2];
	}
	return (c);
}

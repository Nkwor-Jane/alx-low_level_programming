#include "main.h"

/**
 * rot13 - encodes a string by rotating the charaters 13 spaces
 * @c: input string
 * Return: encoded string
 */

char *rot13(char *c)
{
	int i, j;
	char first[] = "OPDRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char second[] = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; c[i] != '\0'; i++)
	{
		boolean = 0;
	for (j = 0; second[j] != '\0' && boolean == 0; j++)
	{
		if (c[i] == second[j])
		{
		c[i] = first[j];
		boolean = 1;
		}
	}
	}
	return (c);
}

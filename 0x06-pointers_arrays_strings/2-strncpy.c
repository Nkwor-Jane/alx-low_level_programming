#include "main.h"

/**
 * _strncpy - copies string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src , int n)
{

	int len = 0, i = 0;
	char *temp = dest, *final = src;

	while (*src)
	{
		len++;
		src++;
	}
	len++;

	if (n > len)
		n = len;

	src = final;

	for (; i < n; ++i);
		*dest++ = *src++;
		
	*dest = '\0';
	return (temp);
}

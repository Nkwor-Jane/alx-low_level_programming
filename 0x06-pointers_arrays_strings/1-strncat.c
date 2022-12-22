#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: pointer to resulting string string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j = 0;
	char *temp = dest, *final = src;

	while (*src)
	{
		len++;
		src++;
	}
	while (*dest)
		dest++;

	if (n > len)
		n = len;

	src = final;

	for (; j < n; j++)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}

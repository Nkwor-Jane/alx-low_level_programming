#include "main.h"

/**
 * _strcpy - copies string point to by src
 * @dest: pointer to string
 * @src: pointer to buffer
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;


	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

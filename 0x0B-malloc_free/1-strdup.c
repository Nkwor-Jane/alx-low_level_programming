#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - copies a string into a new buffer
 * @str: string to copy
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
	char *i;
	unsigned int len, j;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	i = malloc(len * sizeof(char));
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}
	for (j = 0; j < len; j++)
		i[j] = str[j];
	i[j] = '\0';
	return (i);
}

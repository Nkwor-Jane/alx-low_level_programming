#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * initializes it with specific char
 * @size: size of array
 * @c: charcter to initialized array
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s ==  NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

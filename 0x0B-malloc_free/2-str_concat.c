#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatnantes two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new buffer containg s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int counts1, counts2, size, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (counts1 = 0; s1[counts1]; counts1++)
		;
	for (counts2 = 0; s2[counts2]; counts2++)
		;
	size = counts1 + counts2 + 1;
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		i < counts1 ? (p[i] = s1[i]) : (p[i] = s2[i - counts1]);
	return (p);
}

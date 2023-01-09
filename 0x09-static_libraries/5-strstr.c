#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @needle: substring
 * @haystack: main string
 * Return: pointer to beginning of the located substring
 * or NULL if subgstring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *startString = needle, *startMain = haystack;

	while (*haystack)
	{
		startMain = haystack;
		needle = startString;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = startMain + 1;
	}
	return (NULL);
}

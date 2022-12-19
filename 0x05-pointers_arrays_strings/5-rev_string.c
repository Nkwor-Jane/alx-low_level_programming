#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s: the string
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0, rev = 0;
	char rev_str;

	while (s[i] != '\0')
	{
		i++;
	}
	while (rev < i--)
	{
		rev_str = s[rev];
		s[rev++] = s[i];
		s[i] = rev_str;
	}
}

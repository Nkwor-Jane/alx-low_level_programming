#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to be checked
 * Return: 1
 */

int _isupper(int c)
{
	char upper;
	int res = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			res = 1;
		}
	}
	return (res);
}

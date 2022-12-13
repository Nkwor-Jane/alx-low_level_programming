#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: letters
 * Return: 1
 */
int _isalpha(int c)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				return (0);
		}
	}
	return (0);
}

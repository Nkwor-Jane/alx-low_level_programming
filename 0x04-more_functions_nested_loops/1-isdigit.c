#include "main.h"

/**
 * _isdigit - checks for a digit, 0-9
 * @c: digit to check
 * Return: 1
 * otherwise 0
 */

int _isdigit(int c)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (c == digit)
		{
			return (1);
		}
	}
	return (0);
}

#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: letters
 * Return: 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

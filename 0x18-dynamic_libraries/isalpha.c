#include "main.h"
/**
 * _isalpha - checks for alphabtic character
 * @c: letters
 * Return: 0 and 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

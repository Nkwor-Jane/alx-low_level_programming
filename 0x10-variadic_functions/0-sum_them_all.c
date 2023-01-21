#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns sum of all its parameters
 * @n: number of arguments
 * @...: ellipsis, variable list of arguments
 * Return: sum of all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum_all = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (; i < n; i++)
	{
		sum_all += va_arg(ap, int);
	}
	va_end(ap);
	return (sum_all);
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that print nuumbers
 * @seperator: string printed between numbers
 * @n: number of integer passed to funtion
 * @...: ellipsis, variables of args
 * Return: number
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int all_num;

	va_start(ap, n);
	for (; i < n; i++)
	{
		all_num = va_arg(ap, int);
		printf("%d", all_num);
		if (seperator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}

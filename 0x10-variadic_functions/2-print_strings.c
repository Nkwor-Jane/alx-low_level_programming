#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 * @seperator: string printed between strings
 * @n: number of integer passed to funtion
 * @...: ellipsis, variables of args
 * Return: strings
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *all_string;

	va_start(ap, n);
	for (; i < n; i++)
	{
		all_string = va_arg(ap, char*);
		if (all_string == NULL)
			printf("(nil)");
		else
			printf("%s", all_string);
		if (seperator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}

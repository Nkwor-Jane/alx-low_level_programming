#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of args passed to function
 * (c-char, i-int, f-float, s-char *)
 * @...: ellipsis, variables of args
 * Return: all
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *strings;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				strings = va_arg(ap, char*);
				if (strings != NULL)
				{
					printf("%s", strings);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}

	va_end(ap);
	printf("\n");
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char charSize;
	int intSize;
	long longSize;
	long long twoLongSize;
	float floatSize;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(charSize));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(intSize));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(longSize));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(twoLongSize));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(floatSize));
	return (0);
}

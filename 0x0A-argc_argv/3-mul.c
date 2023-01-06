#include "main.h"
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int val1, val2, result;

	if (argc != 3)
	{
		printf("No\n");
		return (1);
	}
	else
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		result = val1 * val2;
		printf("%d\n", result);
		return (0);
	}
}

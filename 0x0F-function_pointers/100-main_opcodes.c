#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints code of its own function
 * @argc: argument count
 * @argv: array of args
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;
	i = 0;
	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hhx ", ptr[i++]);
		printf("%hhx\n", ptr[i]);
	}
	return (0);
}

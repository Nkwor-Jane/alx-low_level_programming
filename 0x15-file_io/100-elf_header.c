#include <stdio.h>
/**
 * main entry point to get ELF file
 * @argc: argument count
 * @argv: pointer to array of arguments
 * Retrurn: 1 on success
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv%p\n", argc, (void*)*argv);
	return (1);
}


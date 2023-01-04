#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: nothing
 */

int main(void)
{
	int r;

	r=is_prime_number(1);
	printf("%d\n", r);
	r=is_prime_number(1024);
	printf("%d\n", r);
	r=is_prime_number(17);
	printf("%d\n",r);
	r= is_prime_number(-1);
	printf("%d\n", r);
	return (0);
}

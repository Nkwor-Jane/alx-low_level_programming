#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: nothing
 */

int main(void)
{
	int r;

	r=_pow_recursion(1, 10);
	printf("%d\n", r);
	r=_pow_recursion(1024, 0);
	printf("%d\n", r);
	r=_pow_recursion(5,-2);
	printf("%d\n",r);
	r= _pow_recursion(-5, 3);
	printf("%d\n", r);
	return (0);
}

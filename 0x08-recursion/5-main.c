#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: nothing
 */

int main(void)
{
	int r;

	r=_sqrt_recursion(1);
	printf("%d\n", r);
	r=_sqrt_recursion(1024);
	printf("%d\n", r);
	r=_sqrt_recursion(17);
	printf("%d\n",r);
	r= _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}

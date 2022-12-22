#include "main.h"

/**
 * reverse_array - function that reverses the
 * content of an array of integers
 * @a: array
 * @n: number of elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, sub;

	i = sub = 0;
	n = n - 1;
	while (i <= n)
	{
		sub = a[n];
		a[n--] = a[i];
		a[i++] = sub;
	}
}

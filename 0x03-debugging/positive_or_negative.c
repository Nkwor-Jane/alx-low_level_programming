#include <stdio.h>
#include <stlib.h>
#include <time.h>

/**
 * positive_or_negative - get positive or negative numbers
 * Return: 0
 */

int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		print("%d if negative\n", n);

	return (0);
}

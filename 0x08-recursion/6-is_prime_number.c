#include "main.h"
/**
 * is_prime_number - function that returns 1 if input is a prime number
 * @n: input integer
 * Return: 1 if a prime number
 *  and 0 if not
 */
int is_prime_number(int n)
{
	return (prime_number(2, n));
}

/**
 * prime_number - checks if number is prime number
 * @n: iterator
 * @base: base number to check
 * Return: 1 if its a prime number
 */

int prime_number(int n, int base)
{
if (base % n == 0 || base < 2)
return (0);
else if (n == base - 1)
return (1);
else if (base > n)
return (prime_number(n + 1, base));
return (1);
}

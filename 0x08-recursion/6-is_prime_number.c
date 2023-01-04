#include "main.h"

/**
 * prime - Makes possible to evaluate from 1 to n
 * @a: input
 * @b: input
 * Return: 1 .
 */

int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime(a, b + 1));
}

/**
 * is_prime_number - checks if the number is a prime number
 * @n: input
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}

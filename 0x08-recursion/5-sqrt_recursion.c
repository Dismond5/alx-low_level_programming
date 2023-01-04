#include "main.h"

/**
 * check_int - checks integer as candidate for square root
 * @square: input
 * @a: input
 * Return: 1.
 */
int check_int(int square, int a)
{
	if (a * a == square)
		return (a);
	else if (a > square / a)
		return (check_int(square, a - 1));
	else if (a < square / a)
		return (check_int(square, a + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 *  Return: integer
 */
int _sqrt_recursion(int n)
{
	int x;

	x = 1;
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check_int(n, x));
}

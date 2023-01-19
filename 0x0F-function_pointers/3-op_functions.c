#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: input
 * @b: input
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two numbers
 * @a: input
 * @b: input
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: input
 * @b: input
 * Return: a / b
 */

int op_mul(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two numbers
 * @a: input
 * @b: input
 * Return: 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

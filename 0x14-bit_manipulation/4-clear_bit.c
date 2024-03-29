#include "main.h"

/**
 * clear_bit - A function that sets a bit to 0 at given index
 * @n: input
 * @index: input
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

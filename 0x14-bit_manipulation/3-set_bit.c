#include "main.h"

/**
 * set_bit - A function that sets a bit at given index to 1
 * @n:input
 * @index: input
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 0x01;

	m <<= index;
	if (m == 0)
		return (-1);
	*n |= m;

	return (1);
}

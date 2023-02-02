#include "main.h"

/**
 * set_bit - A function that sets a bit at given index to 1
 * @n:input
 * @index: input
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}

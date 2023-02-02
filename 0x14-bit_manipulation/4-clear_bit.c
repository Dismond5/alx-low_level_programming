#include "main.h"

/**
 * clear_bit - A function that sets a bit to 0 at given index
 * @n: input
 * @index: input
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 0x01;

	m = ~(m << index);
	if (m == 0x00)
		return (-1);
	*n &= m;
	return (1);
}	

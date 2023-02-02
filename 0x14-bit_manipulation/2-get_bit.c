#include "main.h"

/**
 * get_bit - A function that gets a bit at index
 * @n: input
 * @index: input
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}

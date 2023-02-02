#include "main.h"

/**
 * get_bit - A function that gets a bit at index
 * @n: input
 * @index: input
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 0x01;

	m <<= index;
	if (max == 0)
		return (-1);

	if ((n & m))
		return (1);
	else
		return (0);
}

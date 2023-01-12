#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: input
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);
	if (z == NULL)
		exit(98);
	return (z);
}

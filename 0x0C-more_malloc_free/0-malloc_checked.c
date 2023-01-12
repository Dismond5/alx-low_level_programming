#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: input
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *aomr;

	aomr = malloc(b);
	if (aomr == NULL)
		exit(98);

	return (aomr);
}

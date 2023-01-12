#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: input
 * @size: input
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = malloc(nmemb * size);
	if (z != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			z[a] = 0;
		return (z);
	}
	else
		return (NULL);
}

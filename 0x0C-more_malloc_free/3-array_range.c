#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: input
 * @max: input
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *z;
	int a, b = 0;

	if (min > max)
		return (NULL);
	z = malloc(sizeof(*z) * ((max - min) + 1));
	if (z != NULL)
	{
		for (a = min; a <= max; a++)
		{
			z[b] = a;
			b++;
		}
		return (z);
	}
	else
		return (NULL);
}

#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: input
 * @c: input
 * Return: always 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		*(arr + a) = c;

	return (arr);
}

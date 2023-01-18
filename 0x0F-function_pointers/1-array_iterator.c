#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: input
 * @size: input
 * @action: input
 * return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
		for (x = 0; x < size; x++)
			action(array[x]);
}

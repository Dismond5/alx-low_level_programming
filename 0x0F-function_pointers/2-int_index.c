#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input
 * @size: input
 * @cmp: inpuy
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (x = 0; x < size; x++)
			if (cmp(array[x]))
				return (x);
	}
	return (-1);
}

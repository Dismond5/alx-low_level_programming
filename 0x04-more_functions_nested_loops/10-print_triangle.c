#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: input
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, z;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (z = 1; z <= size; z++)
				if (z >= i)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}

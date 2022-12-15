#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: input
 * Return: square.
 */
void print_square(int size)
{
	int x, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');
			for (z = 2; z <= size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

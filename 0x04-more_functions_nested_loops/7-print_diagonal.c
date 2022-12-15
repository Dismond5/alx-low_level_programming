#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line
 * @n: input
 * Return: diagonal line.
 */

void print_diagonal(int n)
{
	int x, z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (z = 1; z < x; z++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

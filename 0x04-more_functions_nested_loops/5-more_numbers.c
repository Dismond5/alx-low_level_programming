#include "main.h"

/**
 * more_numbers - a function that prints 10 times
 *	the numbers, from 0 to 14.
 *i@: input.
 *x@: input.
 * Return: print 0-14 10 times.
 */
void more_numbers(void)
{
	int i, x;

	for (x = 0; x <= 9; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}

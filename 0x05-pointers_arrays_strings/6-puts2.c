#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input
 * Return: Always 0.
 */

void puts2(char *str)
{
	int x, y;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y += 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}

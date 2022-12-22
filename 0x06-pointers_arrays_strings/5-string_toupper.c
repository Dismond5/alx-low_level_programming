#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 *	of a string to uppercase
 * @x : input
 * Return: char.
 */

char *string_toupper(char *x)
{
	int y = 0;

	while (x[y])
	{
		if (x[y] <= 97 && x[y] <= 122)
		{
			x[y] -= 32;
		}
		y++;
	}

	return (x);
}

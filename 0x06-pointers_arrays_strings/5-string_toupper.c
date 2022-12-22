#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 *	of a string to uppercase
 * @x : input
 * Return: char.
 */

char *string_toupper(char *x)
{
	int y;

	y = 0;
	while (*(x + y))
	{
		if (*(x + y) <= 'a' && *(x + y) <= 'z')
		{
			*(x + y) -= 'a' - 'A';
		}
		y++;
	}

	return (x);
}

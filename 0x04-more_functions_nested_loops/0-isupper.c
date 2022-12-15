#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @c: input
 * Return: 1 if upper, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

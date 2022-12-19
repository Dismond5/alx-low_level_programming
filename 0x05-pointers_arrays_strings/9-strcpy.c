#include "main.h"

/**
 * _strcpy - copies the string pointed to
 * @dest: input
 * @src: input
 * Return: the pointer
 */

char *_strcpy(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (src[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y++)
	{
		dest[x] = src [y];
	}
	dest[y] = '\0';

	return (dest);
}

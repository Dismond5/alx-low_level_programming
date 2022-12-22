#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: input
 * @src: input
 * @n: input
 * return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && *(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x < n)
	{
		*(dest + i) = '\0';
		x++;
	}

	return (dest);
}

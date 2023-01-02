#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest:input
 * @src: input
 * @n: input
 * Retuen: always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(dest + a) = *(src + a);
		i++;
	}
	return (dest);
}	

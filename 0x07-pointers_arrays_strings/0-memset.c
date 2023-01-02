#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:input
 * @b:input
 * @n:input
 * Return: always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(s + a) = b;
		i++;
	}
	return (s);
}

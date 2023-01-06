#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: input
 * Return: always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
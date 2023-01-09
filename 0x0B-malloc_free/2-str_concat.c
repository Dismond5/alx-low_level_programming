#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: always 0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int siz1 = 0, siz2 = 0;
	char *pr, *rt;

	pr = s1;
	if (s1)
		while (*pr++)
			siz1++;
	else
		s1 = "";
	pr = s2;
	if (s2)
		while (*pr++)
			siz2++;
	else
		s2 = "";
	rt = malloc (siz1 + siz2 +1);
		if (!rt)
			return (NULL);
	pr = rt;
	while (*s1)
		*pr++ = *s1++;
	while (*s2)
		*pr++ = *s2++;
	*pr = 0;

	return (rt);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: input
 * Return: always 0
 */

char *_strdup(char *str)
{
	char *cstr;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	cstr = malloc(sizeof(char) * (a + 1));
	if (cstr == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		cstr[b] = str[b];
	}
	cstr[a] = '\0'

	return (cstr);
}

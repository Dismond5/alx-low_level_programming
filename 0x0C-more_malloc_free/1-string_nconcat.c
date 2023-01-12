#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1:l input
 * @s2: input
 * @n: inpuy
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int z = n, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (k = 0; s1[k]; k++)
		z++;
	c = malloc(sizeof(char) * (z + 1));
	if (c == NULL)
		return (NULL);
	z = 0;
	for (k = 0; s1[k]; k++)
		c[z++] = s1[k];
	for (k = 0; s2[k] && k < n; k++)
		c[z++] = s2[k];
	c[z] = '\0';

	return (c);
}

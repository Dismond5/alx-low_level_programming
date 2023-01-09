#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: input
 * @av: input
 * Return: always 0
 */

char *argstostr(int ac, char **av)
{
	int x, y, stlen, z;
	char *nstr;

	z = 0;
	stlen = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
		for (y = 0; *(*(av + x) + y); y++)
			stlen++;
	nstr = malloc((stlen + ac + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y) != '\0'; y++)
		{
			*(nstr + z) = *(*(av + x) + y);
			z++;
		}
		*(nstr + z) = '\n';
		z++;
	}
	*(nstr + z) = '\0';

	return (nstr);
}

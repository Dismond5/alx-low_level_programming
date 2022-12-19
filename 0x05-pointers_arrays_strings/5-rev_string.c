#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return Always 0.
 */

void rev_string(char *s)
{
	char zen;
	int x, y, z;

	y = 0;
	z = 0;
	while (s[y] != '\0')
	{
		y++;
	}
	z = y - 1;
	for (x = 0; x < y; x++)
	{
		zen = s[x];
		s[x] = s[z];
		s[z--] = zen;
	}
}

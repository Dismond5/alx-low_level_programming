#include "main.h"

/**
 * leet - encodes a string into 1337
 * @x: input
 * return: 0.
 */

char *leet(char *x)
{
	int a = 0, b = 0, c = 5;
	char n[5] = {'A', 'E', 'O', 'T', 'L'};
	char m[5] = {'4', '3', '0', '7', '1'};

	while (x[a])
	{
		b = 0;
		while (b < c)
		{
			if (x[a] == n[b] || x[a] - 32 == n[b])
			{
				x[a] = m[b];
			}
			b++;
		}
		a++;
	}

	return (s);
}

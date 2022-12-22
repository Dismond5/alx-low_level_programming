#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @x: input
 * Return: char.
 */

char *cap_string(char *x)
{
	int a = 0;
	int b;
	char Sep[] = " \n\t,;.!?\"(){}";

	if (x[0] >= 'a' && a[0] <= 'z')
		x[0] = x[0] - 32;
	for (; x[a] != '\0'; a++)
	{
		for (b = 0; b < 12; b++)
		{
			if (c[a] == sep[b])
				if (x[a + 1] >= 'a' && x[a + 1] <= 'z')
					x[a + 1] -=32;
		}
	}
	return (x);
}


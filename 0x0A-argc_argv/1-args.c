#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments
 * @argc: input
 * @argv: input
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	int a;

	a = 0;
	while (a < argc)
	{
		a++;
		(*argv)++;
	}
	printf("%i\n", a - 1);

	return (0);
}

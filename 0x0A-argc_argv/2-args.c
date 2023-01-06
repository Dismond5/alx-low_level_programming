#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a;

	a = 0;
	while (a < argc)
	{
		printf("%s\n", *(argv + a));
		a++;
		(*argv)++;
	}
	return (0);
}

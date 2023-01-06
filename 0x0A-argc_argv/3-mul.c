#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", mul);
	}
	return (0);
}

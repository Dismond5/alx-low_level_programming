#include <stdio.h>

/**
 * main - Entry point
 * *
 * Return: Always 0 (success)
 */
int main(void)
{
	int q;
	long int w;
	long long int e;
	char d;
	float f;

	printf("Size of an int: %lu bytes\n", sizeof(q));
	printf("Size of a long int: %lu bytes\n", sizeof(w));
	printf("Size of a long long int: %lu bytes\n", sizeof(e));
	printf("Size of a char: %lu bytes\n", sizeof(d));
	printf("Size of a float: %lu bytes\n", sizeof(f));
	return (0);
}

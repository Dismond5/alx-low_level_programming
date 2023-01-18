#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: input
 * @f:input
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

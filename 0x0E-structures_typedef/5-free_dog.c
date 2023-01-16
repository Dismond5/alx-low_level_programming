#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - #include "dog.h"
 * @d: input
 *
 * Return: na
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

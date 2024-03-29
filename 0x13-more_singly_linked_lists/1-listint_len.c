#include "lists.h"

/**
 * listint_len - Returns the number of elements in a list
 * @h: input
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

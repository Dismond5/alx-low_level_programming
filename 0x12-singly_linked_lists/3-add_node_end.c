#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list
 * @head: input
 * @str: input
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *cursor = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
/**
 * _strlen - counts the length of a string
 * @str: input
 * Return: string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

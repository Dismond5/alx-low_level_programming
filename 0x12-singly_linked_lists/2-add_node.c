#include "lists.h"

/**
 * add_node - adds a node to the beginning of a list
 * @head: input
 * @str: input
 * Return: input
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - counts the length of a string
 * @str: input
 * Return: input
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

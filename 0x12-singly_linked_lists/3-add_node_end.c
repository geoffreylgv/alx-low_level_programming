#include "lists.h"

/**
 * add_node_and - add node to the end of linkedlist
 * @head: ptr head
 * @str: string to be add
 *
 * Return: address latest of node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;
	}
	else
		return (NULL);
	if (head != NULL)
	{
		while (head->next != NULL)
			head = head->next;
		head->next = new;
	}
	else
		*head = new;
	return (new);
}


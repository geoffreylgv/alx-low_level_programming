#include "lists.h"

/**
 * add_node - adds a node to the begin'g of linkedlist
 * @head: ptr head param
 * @str: str param to be added
 *
 * Return: address of the latest added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}


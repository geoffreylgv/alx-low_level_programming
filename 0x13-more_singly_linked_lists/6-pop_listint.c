#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: header first prt element
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int del_node;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	del_node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (del_node);
}


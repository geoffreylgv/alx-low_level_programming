#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: head prt element first
 * @index: node's index
 *
 * Return: pointer of node searched or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;

	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	return (node ? node : NULL);
}


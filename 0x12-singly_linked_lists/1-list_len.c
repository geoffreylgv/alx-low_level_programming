#include "lists.h"

/**
 * list_len - counts number of node in linkedlist
 * @h: head param
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}


#include "lists.h"

/**
 * print_list - prints elements of a list_t list
 * @h: const ptr
 *
 * Return: it returns nodes's number
 */
size_t print_list(const list *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (noeuds);
}


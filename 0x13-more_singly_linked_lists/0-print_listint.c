#include "lists.h"
/**
 * print_listint -  prints all the elements of a list
 * @h: pointer to the first node in the list
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;


	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}


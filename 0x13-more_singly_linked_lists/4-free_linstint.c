#include "lists.h"

/**
  * free_listint - free list to have space
  * @head: head firstelmt
  * Return: N/A void
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

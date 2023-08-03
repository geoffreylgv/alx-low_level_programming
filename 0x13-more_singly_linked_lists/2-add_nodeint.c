#include "lists.h"

/**
  * add_nodeint - add a node at the begining
  * @head: header, first element
  * @n: param int to add
  * Return: ptr of new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}


#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: head of node ptr, first elmt
 *
 * Return: the sum of data in each node
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

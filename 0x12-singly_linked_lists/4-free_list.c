#include "lists.h"

/**
 * free_list - frees a linkedlist
 * @head: head of the list
 *
 * Return: N/A | vide
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}


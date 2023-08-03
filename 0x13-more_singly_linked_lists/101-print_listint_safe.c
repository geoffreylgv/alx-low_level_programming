#include "lists.h"
#include <stdio.h>

/**
 * find_loop - finds the loop in a linked list
 * @head: head first elmt
 *
 * Return: addr prt; or NULL if null head and list
 */
const listint_t *find_loop(const listint_t *head)
{
	const listint_t *one, *two;

	if (head == NULL || head->next == NULL)
		return (NULL);
	one = head, two = head;

	one = one->next, two = two->next->next;
	while (two && two->next)
	{
		if (one == two)
			break;
		one = one->next;
		two = two->next->next;
	}
	if (one != two)
		return (NULL);
	one = head;
	while (one != two)
	{
		one = one->next;
		two = two->next;
	}
	return (one);
}

/**
 * print_listint_safe - Print a linked list
 * @head: head node of a linked list
 *
 * Return: count as  number of nodes in list; on fails, exit with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *hold;
	size_t count, repeat;

	if (head == NULL)
		return (0);

	hold = find_loop(head), count = 0, repeat = 0;

	while (head != NULL)
	{
		if (hold != NULL && hold == head)
			repeat += 1;

		if (repeat == 2)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		count += 1;
		head = head->next;
	}

	return (count);
}


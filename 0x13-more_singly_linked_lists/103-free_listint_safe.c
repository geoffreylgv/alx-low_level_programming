#include "lists.h"
#include <stdio.h>

/**
 * _find_loop - finds the loop in a linked list
 * @head: head ptr node
 *
 * Return: pointer addr
 */
listint_t *_find_loop(listint_t *head)
{
	listint_t *one, *two;

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
 * free_listint_safe - free linked lists with a loop safely
 * @head: head first elmt
 *
 * Return: count node free
 */

size_t free_listint_safe(listint_t **head)
{
	listint_t *hold, *cursor;
	size_t count, repeat;

	if (*head == NULL)
		return (0);

	hold = _find_loop(*head), count = 0, repeat = 0;

	while (*head != NULL)
	{
		if (hold != NULL && hold == *head)
			repeat += 1;

		if (repeat == 2)
			break;
		cursor = *head, *head = cursor->next;
		free(cursort), count += 1;
	}
	*head = NULL;
	return (count);
}


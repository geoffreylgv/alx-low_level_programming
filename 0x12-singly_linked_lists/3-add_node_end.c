#include "lists.h"
#include <strings.h>

/**
 * add_node_and - add node to the end of linkedlist
 * @head: ptr head
 * @str: string to be add
 *
 * Return: address latest of node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nouvelle;
	list_t *tete = *head;

	nouvelle = malloc(sizeof(list_t));
	if (nouvelle != NULL)
	{
		nouvelle->str = strdup(str);
		nouvelle->len = _strlen(str);
		nouvelle->next = NULL;
	}
	else
		return (NULL);
	if (tete != NULL)
	{
		while (tete->next != NULL)
			tete = tete->next;
		tete->next = nouvelle;
	}
	else
		*head = nouvelle;
	return (nouvelle);
}


/**
 * _strlen - counts the length of a string
 * @str: string to be counted
 *
 * Return: the length of str
 */
int _strlen(const char *str)
{
        int i = 0;

        while (str[i] != '\0')
                i++;
        return (i);
}



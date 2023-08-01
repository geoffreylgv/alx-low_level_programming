#ifndef LISTS_H
#define LISTS_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

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

size_t print_list(const list *h);
size_t list_len(const list *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif

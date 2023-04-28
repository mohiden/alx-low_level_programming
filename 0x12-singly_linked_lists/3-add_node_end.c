#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node to the end of the list
 * @head: pointer to a pointer of list_t
 * @str: string
 *
 * Return: pointer to list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp = *head;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	while (str[len])
		len++;

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = node;

	return (node);
}

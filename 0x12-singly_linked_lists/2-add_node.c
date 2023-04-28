#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @h: poniter to list_t
 * @str: string
 *
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	while (str[len])
		len++;

	node->str = strdup(str);
	node->len = len;
	node->next = (*head);
	(*head) = node;

	return (node);





}

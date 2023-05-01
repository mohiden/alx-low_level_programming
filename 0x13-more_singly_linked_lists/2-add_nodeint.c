#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: double pointer to listint_t
 * @n: int
 *
 * Return: pointer to listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;


	return (new);

}

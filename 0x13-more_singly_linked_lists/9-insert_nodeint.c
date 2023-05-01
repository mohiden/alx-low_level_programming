#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: double pointer to listint_t
 * @idx: (int) index where to add
 * @n: (int) value to add
 *
 * Return: pointer to lisstint_t ot NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);


	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}
	return (NULL);
}

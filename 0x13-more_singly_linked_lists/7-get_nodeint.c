#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer to listint_t
 * @index: int
 *
 * Return: pointer to listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);

		head = head->next;
	}

	return (NULL);

}

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer to listint_t
 * @index: (int) the index to delete
 *
 * Return: (int) 1 if success or -1 for fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int i;


	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}


	for (i = 0; tmp && i < index; i++)
	{
		if (i == index - 1)
		{
			curr = tmp->next;
			tmp->next = curr->next;
			free(curr);
			return (1);
		}

		tmp = tmp->next;
	}

	return (-1);
}

#include "lists.h"

/**
 * free_listint_safe - safely frees a listint_t list
 * @h: double pointer to listint_t
 *
 * Return: (size_t) number of items in the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	listint_t *curr = *h;
	size_t count = 0;

	if (!h || !*h)
		return (0);

	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		count++;
		free(tmp);

		if (curr >= tmp)
		{
			*h = NULL;
			break;
		}

	}

	*h = NULL;
	return (count);

}

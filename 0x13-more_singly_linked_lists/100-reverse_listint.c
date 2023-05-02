#include "lists.h"

/**
 * reverse_listint - reverse a list of listint_t
 * @head: double pointer to listint_t
 *
 * Return: pointer to listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}

	(*head) = prev;

	return (*head);

}

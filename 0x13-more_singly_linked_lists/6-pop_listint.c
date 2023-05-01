#include "lists.h"

/**
 * pop_listint - deletes the head of node
 * @head: double pointer to listint_t
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);


	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}




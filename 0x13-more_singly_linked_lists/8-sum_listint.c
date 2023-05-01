#include "lists.h"

/**
 * sum_listint - return sum of all data(n) of a list
 * @head: pointer to listint_t
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);


}

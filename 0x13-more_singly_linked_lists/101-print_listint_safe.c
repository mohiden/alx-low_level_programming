#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints listint list
 * @head: pointer to listint_t
 *
 * Return: (size_t) number of items in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head;
	const listint_t *hold = NULL;
	size_t count = 0;
	size_t n;

	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		hold = head;
		n = 0;

		while (n < count)
		{
		if (tmp == hold)
		{
			printf("-> [%p] %d\n", (void  *)tmp, tmp->n);
			return (count);
		}
		hold = hold->next;
		n++;
		}
		if (!head)
			exit(98);

	}
	return (count);
}

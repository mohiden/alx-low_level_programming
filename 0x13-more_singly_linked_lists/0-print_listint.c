#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements in list
 * @h: pointer to listint_t
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}



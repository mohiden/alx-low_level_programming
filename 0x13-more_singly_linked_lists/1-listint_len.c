#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in list
 * @h: pointer to listint_t
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{

	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}

#include "lists.h"

/**
 * find_listint_loop - finds loop in listint_t list
 * @head: pointer to listint_t
 *
 * Return: pointer to listint_t
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h = head;
	listint_t *t = head;

	while (h && h->next)
	{
		t = t->next;
		h = h->next->next;

		if (t == h)
		{
			t = head;

			while (t != h)
			{
				t = t->next;
				h = h->next;
			}
			return (t);
		}
	}

	return (NULL);

}

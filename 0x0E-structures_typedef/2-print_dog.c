#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog values
 * @d: struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "NULL";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

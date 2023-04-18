#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog object
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	dog->name = name;
	dog->age = age;
	dog->owner = owner;


	return (dog);

}

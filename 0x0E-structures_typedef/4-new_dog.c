#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - prints buffer in hexa
 * @name: the address of memory to print
 * @owner: the address of memory to print
 * @age: the address of memory to print
 *
 * Return: Nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	if (name != NULL)
	{
		d->name = malloc(sizeof(name));
		if (d->name == NULL)
			return NULL;
	}
	else
		d->name = NULL;
	
	d->age = age;
	if (owner != NULL)
	{
		d->owner = malloc(sizeof(owner));
		if (d->owner == NULL)
			return NULL;
	}
	else
		d->owner = NULL;
	return (d);
}

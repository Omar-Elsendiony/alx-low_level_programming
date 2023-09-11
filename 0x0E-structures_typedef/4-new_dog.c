#include "dog.h"

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

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

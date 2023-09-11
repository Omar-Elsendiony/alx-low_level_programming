#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - prints buffer in hexa
 * @d: the address of memory to print
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

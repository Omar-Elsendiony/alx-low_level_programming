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
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);    
	if (d != NULL)
		free(d);
}

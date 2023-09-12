#include "dog.h"

/**
 * init_dog - prints buffer in hexa
 * @d: the address of memory to print
 * @name: the address of memory to print
 * @owner: the address of memory to print
 * @age: the address of memory to print
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != ((void *) 0))
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

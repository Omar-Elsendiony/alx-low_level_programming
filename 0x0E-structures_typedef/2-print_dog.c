#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints buffer in hexa
 * @d: the address of memory to print
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name =  d->name;
		float age = d->age;
		char *owner = d->owner;

		printf("Name: ");
		if (name == ((void *) 0))
			printf("(nill)");
		else
			printf("%s", name);
		printf("\n");
		printf("Age: ");
		printf("%.6f", age);
		printf("\n");
		printf("Owner: ");
		if (owner == ((void *) 0))
			printf("(nill)");
		else
			printf("%s", owner);
		printf("\n");
	}
}

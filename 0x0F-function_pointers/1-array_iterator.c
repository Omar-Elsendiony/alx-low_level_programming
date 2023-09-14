#include "function_pointers.h"
/**
 * array_iterator - returns the alphabet
 * @array: ny
 * @size: pointer
 * @action:tt
 * Description: The description
 * Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == ((void *) 0))
		return;
	for (i = 0; i < size && size > 0; i++)
	{
		action(array[i]);
	}
}

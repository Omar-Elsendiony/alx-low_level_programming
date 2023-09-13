#include "function_pointers.h"
/**
 * print_name - returns the alphabet
 * @array: ny
 * @size: pointer
 * action:tt
 * Description: The description
 * Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

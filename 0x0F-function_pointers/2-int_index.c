#include "function_pointers.h"
/**
 * int_index - returns the alphabet
 * @array: ny
 * @size: pointer
 * @cmp: pointer
 * Description: The description
 * Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, functionReturn;

	if (array == ((void *) 0) || cmp == ((void *) 0) || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		functionReturn = cmp(array[i]);
		if (functionReturn != 0)
			return (i);
	}
}

#include <stdio.h>

/**
 * swap_int - returns the alphabet
 * @a: pointer to integer
 * @b: pointer to second number
 * Description: The description
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	(*a) = *b;
	(*b) = temp;
}


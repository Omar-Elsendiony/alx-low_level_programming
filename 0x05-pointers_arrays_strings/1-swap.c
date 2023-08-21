#include <stdio.h>

/**
 * reset_to_98 - returns the alphabet
 * @a: pointer to integer
 * @b: pointer to second number
 * Description: The description
 * Return: void
*/
void swap_int(int *a, int *b)
{
    int temp;

	temp = *a;
    (*b) = temp;
    (*a) = *b;
}


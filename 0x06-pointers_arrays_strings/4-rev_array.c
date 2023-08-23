#include "main.h"

/**
 * reverse_array - returns the alphabet
 * @a: pointer to integer
 * @n: pointer to second number
 * Description: The description
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

#include <stdio.h>

/**
 * print_array - returns the alphabet
 * @a: pointer to the start of string
 * @n: number of elements
 * Description: The description
 * Return: void
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		i += 1;
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}

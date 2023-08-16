#include "main.h"

/**
 * main - returns the time table
 * Description: The description
 * Return: 0
*/
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	return (0);
}

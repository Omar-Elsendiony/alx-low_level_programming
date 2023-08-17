#include <stdio.h>
/**
 * main - returns the time table
 * Description: The description
 * Return: 0
*/
int main(void)
{
	int i;

	printf("1 2");
	for (i = 1; i < 101; i++)
	{
		printf(" ");
		if (i % 3 && i % 5)
		{
			printf("FizzBuzz");
		}
		else
		{
			if (i % 3)
			{
				printf("Fizz");
			}
			if (i % 5)
			{
				printf("Buzz");
			}
		}
	}
	printf("\n");
	return (0);
}

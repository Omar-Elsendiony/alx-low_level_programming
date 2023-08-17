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
	for (i = 3; i < 101; i++)
	{
		printf(" ");
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	printf("\n");
	return (0);
}

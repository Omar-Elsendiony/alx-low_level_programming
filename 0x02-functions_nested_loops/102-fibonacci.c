#include <stdio.h>
/**
 * main - returns the time table
 * Description: The description
 * Return: 0
*/
int main(void)
{
	long int i, firstNum, secondNum, temp;

	firstNum = 1;
	secondNum = 2;
	printf("1, 2");
	for (i = 0; i < 48; i++)
	{
		printf(", ");
		temp = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = temp;
		printf("%ld", temp);
	}
	printf("\n");
	return (0);
}

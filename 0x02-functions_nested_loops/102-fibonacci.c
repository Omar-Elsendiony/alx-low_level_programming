#include <stdio.h>
/**
 * main - returns the time table
 * Description: The description
 * Return: 0
*/
int main(void)
{
	int i, firstNum, secondNum, temp;

	firstNum = 1;
	secondNum = 2;
	printf("1, 2");
	for (i = 48; i < 1024; i++)
	{
		printf(", ");
		temp = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = temp;
		printf("%d", temp);
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
/**
 * main - returns the time table
 * Description: The description
 * Return: 0
*/
int main(void)
{
	int firstNum, secondNum, temp, sum;

	firstNum = 1;
	secondNum = 2;
	while (1)
	{
		temp = firstNum + secondNum;
		if (temp > 4000000)
			break;
		if (temp % 2 == 0)
			sum = sum + temp;
		firstNum = secondNum;
		secondNum = temp;
	}
	printf("%d\n", sum);
	return (0);
}

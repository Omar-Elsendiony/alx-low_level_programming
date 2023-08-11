#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main : starting point
 * Description: The description
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive",n);
	}
	else if (n < 0)
	{
		printf("%i is negative",n);
	}
	else
	{
		printf("0 is zero");
	}
	return (0);
}

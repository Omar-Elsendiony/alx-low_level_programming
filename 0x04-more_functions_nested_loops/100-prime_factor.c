#include <stdio.h>

/**
 * main - returns the alphabet
 * 
 * Description: The description
 * Return: 0
*/
int main(void)
{
    long i, j, testingPrime, primeFactor;
	long theNumber = 612852475143;

    for (j = 2; j < theNumber / 2; j++)
    {
        if (theNumber % j == 0)
        {
            testingPrime = j;
            for (i = 2; i <= testingPrime / 2; i++)
            {
                if (testingPrime % i == 0) 
                    break;
            }
            if (i == testingPrime / 2)
                primeFactor = testingPrime;
        }
    }
    printf("%ld\n", primeFactor);
    return (0);
}

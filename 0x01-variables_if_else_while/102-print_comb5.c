#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - starting point
 * Description: The description
 * Return: 0
*/
int main(void)
{
	int i, j, k, l, newNumber, testNumber, diff1, diff2;
	int arr[40000];

	for (i = 0; i < 40000; i++)
	{
		arr[i] = 0;
	}
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					testNumber = (j - 48) + (i - 48) * 10 + (l - 48) * 100 + (k - 48) * 1000;
					if (arr[testNumber] == 1)
						continue;
					if (i == k && j == l)
						continue;
					newNumber =  (l - 48) + (k - 48) * 10 + (j - 48) * 100 + (i - 48) * 1000;
					arr[newNumber] = 1;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == 57 && j == 56 && k == 57 && l == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

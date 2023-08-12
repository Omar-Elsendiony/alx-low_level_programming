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
	int i, j, k, l, t1, t2, t3, t4, t5, t6;
	int arr[40000];

	for (i = 0; i < 40000; i++)
	{
		arr[i] = 0;
	}
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (l = 48; l <= 57; l++)
			{
				t1 = 100 * j + 10 * i + l;
				t2 = 100 * l + 10 * i + j;
				t3 = 100 * l + 10 * j + i;
				t4 = 100 * j + 10 * l + i;
				t5 = 100 * i + 10 * l + j;
				t6 = 100 * i + 10 * l + j;
				if (arr[t1] == 1 || arr[t2] == 1 || arr[t3] == 1 || arr[t4] == 1)
					continue;
				if (!(i != j && j != l && i != l) || arr[t5] == 1 || arr[t6] == 1)
					continue;
				arr[100 * i + 10 * j + l] = 1;
				putchar(i);
				putchar(j);
				putchar(l);
				if (!(i == 55 && j == 56 && l == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

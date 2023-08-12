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
	int i, l, t1;
	int arr[40000];

	for (i = 0; i < 40000; i++)
	{
		arr[i] = 0;
	}
	for (i = 48; i <= 57; i++)
	{
		for (l = 48; l <= 57; l++)
		{
			t1 = 10 * l + i;
			if (arr[t1] == 1)
				continue;
			if (!(i != l))
				continue;
			arr[10 * i + l] = 1;
			putchar(i);
			putchar(l);
			if (!(i == 56 && l == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

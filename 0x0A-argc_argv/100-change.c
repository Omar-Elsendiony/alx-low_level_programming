#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>


/* betty style doc for function main goes there */
/**
 * utility - starting point
 * @m: c
 * @a: arguments
 * @c: arguments
 * @nC: arguments
 * @dp: arguments
 * @coins: arguments
 * Description: The description
 * Return: 0
*/
int utility(unsigned int m, unsigned int a, int c, int coins[], unsigned int dp[1000000])
{
	int i, min, ret;

	if (dp[a] != (unsigned int) -1)
		return (dp[a]);
	min = INT_MAX;
	if (a > m)
	{
		dp[a] = -1;
		return (dp[a]);
	}
	if (a == m)
	{
		dp[a] = c;
		return (dp[a]);
	}
	for (i = 0; i < 5; i++)
	{
		ret = utility(m, a + coins[i], c + 1, coins, dp);
		if (ret < min && ret != -1)
		{
			min = ret;
		}
	}
	dp[a] = min;
	return (min);
}
/* betty style doc for function main goes there */
/**
 * main - starting point
 * @argc: c
 * @argv: arguments
 * Description: The description
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i, m, c;
	int coins[] = {25, 10, 5, 2, 1};
	unsigned int dp[1000000];

	for (i = 0; i < 1000000; i++)
	{
		dp[i] = -1;
	}
	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	if (m < 0)
	{
		printf("0\n");
		return (0);
	}
	c = utility(m, 0, 0, coins, dp);
	printf("%d\n", c);
	return (0);
}

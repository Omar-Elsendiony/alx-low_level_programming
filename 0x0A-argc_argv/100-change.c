#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>


/* betty style doc for function main goes there */
/**
 * utility - starting point
 * @m: count
 * @a: arguments
 * @count: arguments
 * @nCoins: arguments
 * @dp: arguments
 * @coins: arguments
 * Description: The description
 * Return: 0
*/
int utility(int m, int a, int count, int coins[], int nCoins, int dp[100000])
{
	int i, min, ret;

	if (dp[a] != -1)
		return (dp[a]);
	min = INT_MAX;
	if (a > m)
	{
		dp[a] = -1;
		return (dp[a]);
	}
	if (a == m)
	{
		dp[a] = count;
		return (dp[a]);
	}
	for (i = 0; i < nCoins; i++)
	{
		ret = utility(m, a + coins[i], count + 1, coins, nCoins, dp);
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
 * @argc: count
 * @argv: arguments
 * Description: The description
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i, m, count;
	int coins[] = {25, 10, 5, 2, 1};
	int dp[100000];

	for (i = 0; i < 100000; i++)
	{
		dp[i] = -1;
	}
	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (0);
	}
	m = atoi(argv[1]);
	if (m <= 0)
	{
		printf("0\n");
		return (0);
	}
	count = utility(m, 0, 0, coins, 5, dp);
	printf("%d\n", count);
	return (0);
}

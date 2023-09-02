#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int utility(int money, int accumulated, int count, int coins[], int numberCoins, int dp[1000])
{
	int i, min, ret;

	if (dp[accumulated] != -1)
		return (dp[accumulated]);
	min = INT_MAX;
	if (accumulated > money)
	{
		dp[accumulated] = -1;
		return (dp[accumulated]);
	}
	if (accumulated == money)
	{
		dp[accumulated] = count;
		return (dp[accumulated]);
	}
	for (i = 0; i < numberCoins; i++)
	{
		ret = utility(money, accumulated + coins[i], count + 1, coins, numberCoins, dp);
		if (ret < min && ret != -1)
		{
			min = ret;
		}
	}
	dp[accumulated] = min;
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
	int i, money, count;
	int coins[] = {25, 10, 5, 2, 1};
	int dp[1000];

	for (i = 0; i < 1000; i++)
	{
		dp[i] = -1;
	}
	if (argc - 1 != 1)
	{
		puts("Error");
		return (0);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		puts("0");
		return (0);
	}
	count = utility(money, 0, 0, coins, 5, dp);
	printf("%d\n", count);
	return (0);
}

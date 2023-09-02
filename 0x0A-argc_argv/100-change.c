#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int utility(int money,int accumulated,int count,int coins [], int numberCoins, int dp [1000][100])
{
    int i, min, ret;

    if (dp[accumulated][count] != -1)
        return dp[accumulated][count];
    min = INT_MAX;
    if (accumulated > money)
    {
        dp[accumulated][count] = -1;
        return dp[accumulated][count];      
    }
    if (accumulated == money)
    {
        dp[accumulated][count] = count;
        return dp[accumulated][count];
    }
    for (i = 0; i < numberCoins; i++)
    {
        ret = utility(money, accumulated + coins[i], count + 1, coins, numberCoins, dp);
        if (ret < min && ret != -1)
        {
            min = ret;
        }
    }
    return min;
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
	int i, j, money, count;
    int coins[] = {25, 10, 5, 2, 1};
    int dp [1000][100];

    for (i = 0; i < 1000; i++)
    {
        for (j = 0; j < 100; j++)
        {
            dp[i][j] = -1;
        }
    }
    if (argc - 1 != 1)
    {
        printf("Error\n");
        return (1);
    }
	money = atoi(argv[1]);
    if (money <= 0)
    {
        printf("0\n");
        return (1);
    }
    count = utility(money, 0, 0, coins, 5, dp);
	printf("%d\n", count);
	return (0);
}

#include <iostream>

using namespace std;

int recgetCount(int coins[], int n, int W)
{
    if (W == 0)
        return 1;
    if (n == 0)
        return 0;
    int res = recgetCount(coins, n - 1, W);
    if (coins[n - 1] <= W)
        res = res + recgetCount(coins, n, W - coins[n - 1]);
    return res;
}

int dpgetCount(int coins[], int n, int W)
{
    //Tabulation
    int dp[W + 1][n + 1];
    int i, j;
    for (i = 0; i <= n; i++)
        dp[0][i] = 1;
    for (i = 1; i <= W; i++)
        dp[i][0] = 0;

    for (i = 1; i <= W; i++)
    {
        for (j = 1; j <= n; j++)
        {
            dp[i][j] = dp[i][j - 1];
            if (coins[j - 1] <= i)
                dp[i][j] += dp[i - coins[j - 1]][j];
        }
    }
    return dp[W][n];
}

int main()
{
    int n, i, W;
    cout << "Enter the size of coins " << endl;
    cin >> n;
    cout << "Enter the denomination of the coins: " << endl;
    int coins[n];
    for (i = 0; i < n; i++)
        cin >> coins[i];
    cout << "Enter the weight of the coin: " << endl;
    cin >> W;
    int choice;
    cout << "Enter your choice\n1.recursion\nelse DP" << endl;
    cin >> choice;

    if (choice == 1)
        cout << "Number of ways coin can be exchanged using Recusion is: " << recgetCount(coins, n, W) << endl;
    else
        cout << "Number of ways coin can be exchanged using DP is: " << dpgetCount(coins, n, W) << endl;
}
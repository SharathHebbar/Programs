
/*

Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.
For example, for N = 4 and S = {1,2,3}, 
there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. 
So output should be 4. For N = 10 and S = {2, 5, 3, 6}, 
there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. 
So the output should be 5.

*/

#include <bits/stdc++.h>

using namespace std;

int W, n, i, j;

int numOfWays(int W, int *coins, int n)
{
    int ways[W + 1][n + 1];
    for (i = 0; i <= n; i++)
        ways[i][0] = 1;
    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= W; j++)
        {
            if (coins[i] > j)
                ways[i][j] = ways[i - 1][j];
            else
                ways[i][j] = ways[i - 1][j] + ways[i][j - coins[i]];
        }
    }

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= W; j++)
        {
            cout << ways[i][j] << "\t";
        }
    }

    return ways[W][n];
}

int main()
{

    cout << "Enter the size of coins: \t";
    cin >> n;

    int coins[100];
    cout << "\nEnter the values of the coins \n";

    for (i = 0; i < n; i++)
        cin >> coins[i];

    cout << "Enter the amount to be filled: \t";
    cin >> W;

    int result = numOfWays(W, coins, n);
    cout << "The total number of ways in which the coin can be arranged to get the total amount is: " << result << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int memo[100][100];

int maxi(int a, int b)
{
    return (a > b) ? a : b;
}

//using recursion
int reclcs(string s1, string s2, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (s1[m - 1] == s2[n - 1])
        return 1 + reclcs(s1, s2, m - 1, n - 1);
    else
        return maxi(reclcs(s1, s2, m - 1, n), reclcs(s1, s2, m, n - 1));
}

//using memoization
int memlcs(string s1, string s2, int m, int n)
{
    if (memo[m][n] != -1)
        return memo[m][n];
    if (m == 0 || n == 0)
        memo[m][n] = 0;
    else
    {
        if (s1[m - 1] == s2[n - 1])
            memo[m][n] = 1 + memlcs(s1, s2, m - 1, n - 1);

        else
            memo[m][n] = maxi(memlcs(s1, s2, m - 1, n), memlcs(s1, s2, m, n - 1));
    }
    return memo[m][n];
}

//using tabulation
int tablcs(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    int i, j;
    for (i = 0; i <= m; i++)
        dp[i][0] = 0;
    for (j = 0; j <= n; j++)
        dp[0][j] = 0;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            if (s1[i - 1] == s1[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = maxi(dp[i - 1][j], dp[i][j - 1]);
    return dp[m][n];
}

int main()
{
    int m, n;
    string s1, s2;

    cout << "Input first string\n";
    cin >> s1;

    cout << "Input second string\n";
    cin >> s2;

    m = s1.size();
    n = s2.size();

    if (s1 == s2 && m == n)
    {
        cout << "The strings are same so length of longest subsequence string is: " << m << endl;
        return 0;
    }
    int choice;
    cout << "Enter your choice\n1:Memoization\n2:Tabulation\notherwise Recursion\n";
    cin >> choice;
    if (choice == 1)
    {
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                memo[i][j] = -1;
            }
        }
        cout << "The length of longest subsequence string using memoization is: " << memlcs(s1, s2, m, n) << endl;
    }
    else if (choice == 2)
        cout << "The length of longest subsequence string using tabulation is: " << tablcs(s1, s2, m, n) << endl;
    else
        cout << "The length of longest subsequence string using recursion is: " << reclcs(s1, s2, m, n) << endl;

    return 0;
}
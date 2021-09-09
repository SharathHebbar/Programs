#include <iostream>

using namespace std;

int memo[100][100];

int mini(int a, int b, int c)
{
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

int receD(string s1, string s2, int m, int n)
{
    if (m == 0)
        return n;
    if (n == 0)
        return m;
    if (s1[m - 1] == s2[n - 1])
        return receD(s1, s2, m - 1, n - 1);
    else
        return 1 + mini(receD(s1, s2, m, n - 1), receD(s1, s2, m - 1, n), receD(s1, s2, m - 1, n - 1));
}

int memeD(string s1, string s2, int m, int n)
{
    //memoization

    if (memo[m][n] == -1)
    {
        if (m == 0)
            memo[m][n] = n;
        else if (n == 0)
            memo[m][n] = m;
        else
        {
            if (s1[m - 1] == s2[n - 1])
                memo[m][n] = memeD(s1, s2, m - 1, n - 1);
            else
                memo[m][n] = 1 + mini(memeD(s1, s2, m, n - 1), memeD(s1, s2, m - 1, n), memeD(s1, s2, m - 1, n - 1));
        }
    }
    return memo[m][n];
}
int tabeD(string s, string t, int m, int n)
{

    int dp[m + 1][n + 1];
    int i, j;

    for (i = 0; i <= m; i++)
        dp[i][0] = i;
    for (j = 0; j <= n; j++)
        dp[0][j] = j;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + mini(dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]);
        }
    }

    return dp[m][n];
}

int main()
{
    string s1, s2;
    cout << "Enter 2 strings: " << endl;
    cin >> s1 >> s2;
    int m = s1.size();
    int n = s2.size();
    int choice;
    cout << "Enter your choice\n1.Memoization\n2.Tabulation\nelse. recursion\n"
         << endl;
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

        cout << "The minimum elem to be inserted, deleted or replaced using memoization is:" << memeD(s1, s2, m, n) << endl;
    }
    else if (choice == 2)
        cout << "The minimum elem to be inserted, deleted or replaced using tabulation is:" << tabeD(s1, s2, m, n) << endl;
    else
        cout << "The minimum elem to be inserted, deleted or replaced using recursion is:" << receD(s1, s2, m, n) << endl;
}
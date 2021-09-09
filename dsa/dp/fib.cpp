#include <bits/stdc++.h>

using namespace std;
int n;
int mem[100];

//recursion
int recfib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (recfib(n - 1) + recfib(n - 2));
}

//memoization
int memfib(int n)
{
    if (mem[n] == -1)
    {
        int res;
        if (n == 0 || n == 1)
            res = n;
        else
            res = memfib(n - 1) + memfib(n - 2);

        mem[n] = res;
    }
    return mem[n];
}

//tabulation
int tabfib(int n)
{
    int f[n + 1];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++)
        f[i] = f[i - 1] + f[i - 2];
    return f[n];
}

int main()
{

    cout << "Enter the value for n" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
        mem[i] = -1;

    int choice;
    cout << "Enter your choice\n";
    cout << "1. Memoization\n2. Tabulation\notherwise Recursion\n";
    cin >> choice;
    if (choice == 1)
        cout << "Fibonacci of " << n << " using Memoization is " << memfib(n) << endl;

    else if (choice == 2)
        cout << "Fibonacci of " << n << " using Tabulation is " << tabfib(n) << endl;

    else
        cout << "Fibonacci of " << n << " using Recursion is " << recfib(n) << endl;

    return 0;
}

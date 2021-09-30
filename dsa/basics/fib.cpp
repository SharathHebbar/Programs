#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}
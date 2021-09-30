#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fact(int n)
{
    ll fact[n + 1];
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fact[i] = i * fact[i - 1];
    }
    return fact[n];
}

int main()
{
    ll n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}
#include <iostream>
#define ll long long int
using namespace std;

ll fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}
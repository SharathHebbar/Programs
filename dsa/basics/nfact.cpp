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
    for (int i = 1; i <= n; i++)
        cout << "factorial of " << i << " is: " << fact(i) << endl;
    return 0;
}
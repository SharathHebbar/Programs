#include <bits/stdc++.h>

using namespace std;

int sol(int n, int *a)
{
    int c = 0;
    vector<int> v;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] % 2)
            c++;
        if (a[i] % 2 && a[i + 1] % 2)
            c++;
    }
    if (a[n - 1] % 2 != 0)
        c++;

    return c;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << sol(n, a);
}
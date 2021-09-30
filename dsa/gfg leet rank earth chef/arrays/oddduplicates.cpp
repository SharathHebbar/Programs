#include <bits/stdc++.h>

using namespace std;

void mapmethod(int *a, int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)

        mp[a[i]]++;

    for (auto x : mp)

        cout << x.first << "  " << x.second << endl;

    for (auto x : mp)

        if (x.second % 2 != 0)
            cout << x.first << endl;
}

void sortmethod(int *a, int n)
{
    sort(a, a + n);

    cout << endl;
    int i = 0;
    while (i < n)
    {
        if (a[i] == a[i + 1])
            i += 2;
        else
        {
            cout << a[i] << endl;
            i++;
        }
    }
}

void bitmethod(int *a, int n)
{
    int res = a[0];
    for (int i = 1; i < n; i++)
        res = res ^ a[i];
    cout << res << endl;
    // cout << res - 1 << endl;
    // res = a[n - 1];
    // for (int i = n - 2; i >= 0; i--)
    //     res = res ^ a[i];
    // cout << res + 1 << endl;
}

int main()
{

    //int a[] = {2, 2, 4, 4, 4, 4, 1, 3, 3, 3};
    int a[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4};
    int n = 11;
    mapmethod(a, n);
    sortmethod(a, n);
    bitmethod(a, n);
}

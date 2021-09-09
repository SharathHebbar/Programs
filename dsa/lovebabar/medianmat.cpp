// Find median in a row wise sorted matrix

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c, i, j;
    cin >> r >> c;
    int a[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    int l = sizeof(a) / sizeof(a[0]);
    sort(a, a + l);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] << "\t";
        }
    }
}
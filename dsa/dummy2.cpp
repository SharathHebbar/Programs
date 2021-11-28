#include <bits/stdc++.h>

using namespace std;

int formula(int x1, int y1, int x2, int y2)
{
    int x = x1 - x2;
    x = x * x;
    int y = y1 - y2;
    y = y * y;
    int res = sqrt(x + y);
    return res;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
    }
}
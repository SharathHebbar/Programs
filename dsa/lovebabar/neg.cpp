//Move all the negative elements to one side of the array

#include <bits/stdc++.h>

using namespace std;

vector<int> shuffler(vector<int> a, int l, int h)
{
    int temp;
    while (l <= h)
    {
        if (a[l] > 0 && a[h] < 0)
        {
            temp = a[h];
            a[h] = a[l];
            a[l] = a[h];
            l++;
            h--;
        }
        else if (a[l] < 0 || (a[h] < 0))
            l++;
        else if (a[h] > 0 || a[l] > 0)
            h--;
    }
    return a;
}

int main()
{

    int n, j;
    cin >> n;
    vector<int> a;
    for (j = 0; j < n; j++)
        cin >> a[j];
    int l = 0, h = n - 1;
    a = shuffler(a, l, h);
    for (j = 0; j < n; j++)
        cout << a[j] << "\t";
    cout << endl;
}
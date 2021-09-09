//Find the maximum and minimum element in an array

#include <iostream>

using namespace std;

int main()
{

    int n, i, j, maxi = 0, mini = 0, temp;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
        cin >> a[i];

    maxi = a[0];
    mini = a[1];
    if (maxi < mini)
    {
        temp = maxi;
        maxi = mini;
        mini = temp;
    }

    for (i = 2; i < n; i++)
    {
        if (a[i] > maxi)
            maxi = a[i];
        if (a[i] < mini)
            mini = a[i];
    }
    cout << "Max: " << maxi << endl;
    cout << "Mini: " << mini << endl;
}
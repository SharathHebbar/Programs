//Find the "Kth" max and min element of an array

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k;
    cout << "enter n: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements to array:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    int l = sizeof(a) / sizeof(a[0]);
    sort(a, a + l);
    cout << "Enter K:\n";
    cin >> k;
    cout << k << " th largest element is : " << a[n - k] << "\n";
    cout << k << " th smallest element is : " << a[0 + k - 1] << "\n";
}
// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int count0 = 0, count1 = 0, count2 = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count0++;
        if (arr[i] == 1)
            count1++;
        if (arr[i] == 2)
            count2++;
    }
    for (i = 0; i < count0; i++)
        cout << 0 << "\t";
    for (i = 0; i < count1; i++)
        cout << 1 << "\t";
    for (i = 0; i < count2; i++)
        cout << 2 << "\t";
    cout << endl;
}
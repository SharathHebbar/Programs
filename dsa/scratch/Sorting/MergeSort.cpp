/*Merge sort*/
#include <iostream>

using namespace std;

//-------------------------------------------------------------------
//merging function
void merge(int *a, int l, int h, int m)
{
    int v1 = m - l + 1;
    int v2 = h - m;
    int a1[v1];
    int a2[v2];
    for (int i = 0; i < v1; i++)
        a1[i] = a[l + i];
    for (int i = 0; i < v2; i++)
        a2[i] = a[m + 1 + i];
    int i = 0, j = 0, k = l;
    while (i < v1 && j < v2)
    {
        if (a1[i] < a2[j])
            a[k++] = a1[i++];
        else
            a[k++] = a2[j++];
    }
    while (i < v1)
        a[k++] = a1[i++];
    while (j < v2)
        a[k++] = a2[j++];
}

//---------------------------------------------------------------------
//mergesort function
void mergesort(int *a, int l, int h)
{
    if (l < h)
    {
        int m = (l + h) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, h);
        merge(a, l, h, m);
    }
}

//-------------------------------------------------------------------
//main 
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
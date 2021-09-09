//Reverse the array

#include <bits/stdc++.h>

int main()
{
    int n, i, j;
    std ::cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
        std::cin >> arr[i];
    std::cout << "Reverse of an array is : \n";
    for (i = n - 1; i >= 0; i--)
        std::cout << arr[i] << "\t";
    std ::cout << std::endl;
}
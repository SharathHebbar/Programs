/*

Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
 

Example 1:

Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10
Explanation: 

Example 2:

Input:
N = 4
arr[] = {7,4,0,9}
Output:
10
Explanation:
Water trapped by above 
block of height 4 is 3 units and above 
block of height 0 is 7 units. So, the 
total unit of water trapped is 10 units.

Example 3:

Input:
N = 3
arr[] = {6,9,9}
Output:
0
Explanation:
No water will be trapped.


Your Task:
You don'y need to read input or print anything. The task is to complete the function trappingWater() which takes arr and N as input parameters and returns the total amount of water that can be trapped.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
3 <= N <= 107
0 <= Ai <= 108

*/
#include <bits/stdc++.h>

using namespace std;

int trappingWater(int arr[], int n)
{
    // Code here
    int z = 0, a = 0, temp = 0;

    int count = 0, val, indexz, indexa;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > z)
            z = arr[i];
        indexz = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != z && arr[i] > a)
        {
            a = arr[i];
            indexa = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (!(arr[i] >= a) && ((i < indexa) || (i < indexz)))
        {
            val = a - arr[i];
            count += val;
        }
    }
    return count;
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Output: " << trappingWater(a, n) << endl;
}
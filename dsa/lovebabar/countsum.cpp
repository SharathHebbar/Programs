/*

Count pairs with given sum

    Difficulty Level : Medium
    Last Updated : 19 Mar, 2021

Given an array of integers, and a number ‘sum’, find the number of p

airs of integers in the array whose sum is equal to ‘sum’.

Examples:  

Input  :  arr[] = {1, 5, 7, -1}, 
          sum = 6
Output :  2
Pairs with sum 6 are (1, 5) and (7, -1)


Input  :  arr[] = {1, 5, 7, -1, 5}, 
          sum = 6
Output :  3
Pairs with sum 6 are (1, 5), (7, -1) &
                     (1, 5)         

Input  :  arr[] = {1, 1, 1, 1}, 
          sum = 2
Output :  6
There are 3! pairs with sum 2.

Input  :  arr[] = {10, 12, 10, 15, -1, 7, 6, 
                   5, 4, 2, 1, 1, 1}, 
          sum = 11
Output :  9

Expected time complexity O(n)

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    vector<int> a(n);
    while(n--){
        int v;
        cin>>v;
        a.push_back(v);
    }
    sort(a.begin(),a.end());
    int i;
    for(i = 0;i <n;i++){
        if(a[i] > sum){
            a.remove(a[i]);
        }
    }
    for(i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}


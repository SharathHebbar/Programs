/*

Given an array of N items a1,a2…..an
Given two integers K and X. Where K denotes the maximum number of jumps you can take in either direction that is from the position i, you can jump to position j in one step only if abs(j-i) <= K and 1<=j<=n.
Jumping from i to j and will cost X amount if a[i] = a[j].
Find minimum cost to reach position N from position 1.

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
    cin>>v[i];
    return 0;
}
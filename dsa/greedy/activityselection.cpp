/*
Activity Selection Problem
*/

#include<bits/stdc++.h>

using namespace std;

//------------------------------------------------------------------------------------
//comparator for sorting pairs second element in ascending order

bool cmp(pair<int,int> a,pair<int,int> b){
    return (a.second < b.second);
}

//------------------------------------------------------------------------------------
//function that returns the number of activities that can be selected

int activitySelection(pair<int,int> a[],int n){
    int r = 1;
    sort(a,a+n,cmp);
    int prev = 0,curr;
    for(curr = 1;curr < n;curr++){
        if(a[curr].first >= a[prev].second){
            r++;
            prev = curr;
        }
    }
    return r;
}

//------------------------------------------------------------------------------------
//Driver program
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int, int>activity[n];
        for(int i = 0;i < n;i++){
            int f,s;
            cin>>f>>s;
            activity[i] = make_pair(f,s);
            
        }
        int res = activitySelection(activity,n);
            cout<<res<<endl;
    }
    return 0;
}
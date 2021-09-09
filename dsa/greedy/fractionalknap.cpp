/*
Fractional Knapsack Greedy Algorithm
*/

#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    double r1 = (double)a.second/a.first;
    double r2 = (double)b.second/b.first;
    return r1>r2;
}

double frac_Knapsack(int n,pair<int,int>kp[],int c){
    double res = 0.0;
    sort(kp,kp+n,cmp);
    for(int i = 0;i < n;i++){
        if(kp[i].first <= c){
            res += kp[i].second;
            c = c-kp[i].first;
        }
        else{
            res += kp[i].second*((double)c/kp[i].first);
            break;
        }
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int>knap[n];
        for(int i= 0;i <n;i++){
            int weight,value;
            cin>>weight>>value;
            knap[i] = make_pair(weight, value);
        }
        int capacity;
        cin>>capacity;
        double cost = frac_Knapsack(n,knap,capacity);
        cout<<cost<<endl;
    }

    return 0;

}
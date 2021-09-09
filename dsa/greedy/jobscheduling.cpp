/*
Job Scheduling using Greedy Algorithm(needs to be chked)
*/

#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second > b.second;

}

bool mycmp(pair<int,int>a,pair<int,int>b){
    return a.first > b.first;

}

int jobScheduling(int n,pair<int,int> job[]){
    
    sort(job,job+n,cmp);
    for(int i = 0;i<n;i++){
        cout<<job[i].first<<"\t"<<job[i].second<<endl;
    }
    int m = 0;
    for(int i = 0;i<n;i++){
        if(job[i].first > m) m = job[i].first;
    }

    int res[m];
    for(int i=0;i<m;i++){
        res[i] = 0;
    }
    
    res[0] = job[0].second;

    for(int i=1;i<m;i++){
        if(res[job[i].first-1] == 0){
            res[job[i].first-1] = job[i].second;
        }
        else res[job[i].first] = job[i].second;
    }
    int large = 0;
    for(int i = 0;i <m;i++){
        large += res[i];
    }
    return large;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int> job[n];
        for(int i =0;i<n;i++){
            int deadline,profit;
            cin>>deadline>>profit;
            job[i] = make_pair(deadline,profit);
        }
        cout<<jobScheduling(n,job)<<endl;
        
    }
    return 0;
}
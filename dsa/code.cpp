#include<bits/stdc++.h>

using namespace std;

int potent(int n,vector<int> a,vector<int> b,vector<int> c,vector<int> d){
int large = 0;

for(int i = 0;i <n-1;i++){
    for(int j = i+1;j<n;j++){
    large = max(large,
    abs(a[i]-a[j])
    +abs(b[i]-b[j])+abs(c[i]-c[j])+abs(d[i]-d[j])+abs(i-j));
        }
    }
    return large;
}

int main(){

    int n;
    cin>>n;
    vector<int>A,B,C,D;
    int val;
    for(int i = 0;i < n;i++){
        
        cin>>val;
        A.push_back(val);
    }
        for(int i = 0;i < n;i++){
        
        cin>>val;
        B.push_back(val);
    }
        for(int i = 0;i < n;i++){
        
        cin>>val;
        C.push_back(val);
    }
        for(int i = 0;i < n;i++){
        
        cin>>val;
        D.push_back(val);
    }

    int potential = potent(n,A,B,C,D);
    cout<<potential<<endl;
    return 0;
}

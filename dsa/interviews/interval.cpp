#include<bits/stdc++.h>

using namespace std;

void sol(vector<vector<int>> v,int n){
    int i,j,z;
    int l,r,k;
    int pp = 0;
    int ans = 0;
    vector<int>a;
    for(z = 0;z<n-1;z++){
    l = v[z][0];
    r = v[z][1];
    k = v[z][2];
    a.push_back(k);
        for(i = z+1;i<n;i++){
            if(!(v[i][0] >= l || v[i][1] >= l || v[i][0] <= r || v[i][1] <= r))
            {
                ans = ans + k + v[i][2];
                a.push_back(ans);
            }
        }
    }
    for(int i:a)cout<<i<<" ";cout<<endl;
    int result = *max_element(a.begin(),a.end());
    cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i = 0;i<n;i++){
        int l,r,k;
        cin>>l>>r>>k;
        vector<int> z;
        z.push_back(l);
        z.push_back(r);
        z.push_back(k);
        v.push_back(z);
    }
    sol(v,n);
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool ironManServer(int n,int m,int x,int y,int arr[]){
    if(abs(n-m) < 2) return false;
    bool iscorrect = false;
    for(int i = 0;i < m;i++)
        if(!(x<arr[i] && y > arr[i])) return false;
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int arr[m];
        for(int i = 0;i<m;i++){
            cin>>arr[i];
        }
        bool ims = ironManServer(n,m,x,y,arr);
        if(ims) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

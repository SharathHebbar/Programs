
/*
#include<bits/stdc++.h>

using namespace std;

int n,m;

int islandCount(int y,int z, int a[][m]){
    int c = 0;
    int prev = a[0][0];
    c += prev;
    int top = 0;
    for(int i = 0;i<n;i++){
        
        for(int j=1;j<m;j++){
            if(i >0) top = a[i-1][j];    
            prev = a[i][j-1];
            
            if(a[i][j] == 1 && prev == 0 && top == 0)
                c ++;
        }
        


    }
    return c;
}

int main(){

    
    cin>>n>>m;
    int arr[n][m];
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
   

    cout<<islandCount(n,m,arr)<<endl;
    return 0;

}

*/
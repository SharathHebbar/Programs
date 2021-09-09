#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,n;
    cin>>a>>n;
    try{
        if(n == 0 || a == 0)
            throw 0;
        cout<<n/a<<endl;
    }
    catch(int x){
        cout<<"usage of  0 is prohibited\n";
    }

}
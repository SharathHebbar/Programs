#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,n;
    cin>>a>>n;
    try{
        if(n == 0 || a == 0)
            throw "Division by zero";
        cout<<n/a<<endl;
    }
    catch(const char* x){
        cout<<x;
    }

}
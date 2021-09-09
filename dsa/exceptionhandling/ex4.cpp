#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,n;
    cin>>a>>n;
    try{
        try{
            if(n == 0 )
                throw "n is zero";
        }
    catch(const char* x){
        cout<<x<<endl;;
    }
        if(a == 0)
            throw "Division by zero";
    
    }
    catch(const char* x){
        cout<<x;
    }

}
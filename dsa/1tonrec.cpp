#include<iostream>

using namespace std;

void fun(int n,int i){
    if(i > n) return;
        cout<<i<<endl;
        fun(n,i+1);
        
}

int main(){
    fun(5,1);
    return 0;
}
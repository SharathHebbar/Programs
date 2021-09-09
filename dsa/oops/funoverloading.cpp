/*
  Function Overloading
*/
#include<bits/stdc++.h>

using namespace std;

class A{
    int x;
   public:
   int a;
   int fun(int a){
       return a;
   }
   int fun(int a,int b){
       return a*b;
   }
   int fun(int a,int b,int c){
       return a*b*c;
   }
      
};

int main(){
    A a;
    cout<<a.fun(10)<<endl;
    cout<<a.fun(10,20)<<endl;
    cout<<a.fun(10,20,30)<<endl;
    return 0;
}
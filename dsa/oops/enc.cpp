/*
    Encapsulation
    Abstraction
*/
#include<bits/stdc++.h>

using namespace std;

class A{
    int x;
   public:
   int a;
   A(int x){
       a = x;
   }
   int fun(){
       return a;
   }
      
};

int main(){
    A a(10);
    cout<<a.fun()<<endl;
    return 0;
}
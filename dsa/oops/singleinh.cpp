/*
Single Inheritence 
*/

#include<bits/stdc++.h>

using namespace std;

class A{
   
   public:
   int a = 10;
   A(){
       cout<<"A's Constructor\n";
   }
   void fun(){
       cout<<"In A\n";
   }
      
};
class B : public A{
    
    public:
    B(){
        cout<<"B's constructor\n";
    }
    void fun1(){
        cout<<a<<endl;
    }
};
int main(){
    B b;
    b.fun();
    b.fun1();
    return 0;
}
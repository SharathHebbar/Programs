/*
Multilevel inheritence
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
    int b = 20;
    B(){
        cout<<"B's constructor\n";
    }
    void fun1(){
        cout<<a<<endl;
    }
};

class C : public B{
    
    public:
    C(){
        cout<<"C's constructor\n";
    }
    void fun2(){
        cout<<b<<endl;
    }
};
int main(){
    C b;
    b.fun();
    b.fun1();
    b.fun2();
    return 0;
}
//Multiple Inheritence 

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
class B {
    
    public:
    int b = 20;
    B(){
        cout<<"B's constructor\n";
    }
    void fun1(){
        cout<<"In B"<<endl;
    }
};

class C : public B, public A{
    
    public:
    C(){
        cout<<"C's constructor\n";
    }
    void fun2(){
        cout<<a<<b<<endl;
    }
};
int main(){
    C b;
    b.fun();
    b.fun1();
    b.fun2();
    return 0;
}
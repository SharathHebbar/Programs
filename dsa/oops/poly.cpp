/*
  Function Overriding n polymorphism
*/
#include<bits/stdc++.h>

using namespace std;

class A{
   public:

   virtual void fun(){
       cout<<"Parent function\n";
   }
   void fun1(){
       cout<<"Parent function\n";
   }
      
};
class B: public A{
    public:
    void fun(){
        cout<<"Child function\n";
    }
    void fun1(){
        cout<<"Child function\n";
    }
};
int main(){
    A *a;
    B b;
    //a->fun();
    a = &b;
    a->fun();
    a->fun1();
    return 0;
}
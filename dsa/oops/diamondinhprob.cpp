/*
Diamond Inheritence problem
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
       cout<<"Diamond inheritance problem\n";
   }
      
};
class B : public A{
    
    public:
    int b = 20;
    B(){
        cout<<"B's constructor\n";
    }
    
};

class C : public A{
    
    public:
    C(){
        cout<<"C's constructor\n";
    }

};

class D : public B,public C{
    
    public:
    D(){
        cout<<"D's constructor\n";
    }
    
};

int main(){
   D d;
 //  d.fun();
   /*
    diamondinhprob.cpp: In function 'int main()':
    diamondinhprob.cpp:51:6: error: request for member 'fun' is ambiguous
        d.fun();
        ^~~
    diamondinhprob.cpp:16:9: note: candidates are: void A::fun()
        void fun(){
            ^~~
    diamondinhprob.cpp:16:9: note:  
   */
  /*
  A's Constructor
B's constructor
A's Constructor
C's constructor
D's constructor
  */
}
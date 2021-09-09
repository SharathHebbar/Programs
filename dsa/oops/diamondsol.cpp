/*
Diamond Inheritence solution
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
       cout<<"Diamond inheritance problem solved\n";
   }
      
};
class B : public virtual A{
    
    public:
    int b = 20;
    B(){
        cout<<"B's constructor\n";
    }
    
};

class C : public virtual A{
    
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
   d.fun();
   
}
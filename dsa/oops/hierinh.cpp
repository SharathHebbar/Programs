/*

Hierarchical Inheritence

*/
#include<bits/stdc++.h>

using namespace std;

class A{
   
   public:
   int a = 10;
   A(){
       cout<<"A's Constructor\n";
   }
   
      
};
class B: public A {
    
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

class D : public B{
    
    public:
    D(){
        cout<<"D's constructor\n";
    }
    
};

class E : public B{
    
    public:
    E(){
        cout<<"E's constructor\n";
    }
    
};

class F : public C{
    
    public:
    F(){
        cout<<"F's constructor\n";
    }
    
};

class G : public C{
    
    public:
    G(){
        cout<<"G's constructor\n";
    }
    
};

int main(){
    D d;
    E e;
    F f;
    G g;

    return 0;
}
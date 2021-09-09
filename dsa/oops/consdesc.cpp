#include<bits/stdc++.h>

using namespace std;

class A{
    public:
    A(){
        cout<<"A's constructor\n";
    }
    ~A(){
        cout<<"A's destructor\n";
    }
};

class B:public A{
    public:
    B(){
        cout<<"B's constructor\n";
    }
    ~B(){
        cout<<"B's destructor\n";
    }
};

int main(){
    B b;
    
}
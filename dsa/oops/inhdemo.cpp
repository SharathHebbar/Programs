//Inheritence Demo
#include<bits/stdc++.h>

using namespace std;

class A
{
    public:
        int x;
    protected:
        int y;
    private:
        int z;
};

class B : public A
{
    public:
	void fun(){
        cout<<"x is public\n";
    	cout<<"y is protected\n";
        cout<<"z is not accessible from B\n";
    }
};

class C : protected A
{
    public:
    void fun(){
        cout<<"x is protected\n";
        cout<<"y is protected\n";
        cout<<"z is not accessible from B\n";
    }
};

class D : private A 
{
    public:
    void fun(){
        cout<<"x is private\n";
        cout<<"y is private\n";
        cout<<"z is not accessible from D\n";
    }
};

int main(){
    B b;
    C c;
    D d;
    b.fun();
    c.fun();
    d.fun();
}
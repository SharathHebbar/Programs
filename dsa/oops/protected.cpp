
#include <bits/stdc++.h>

using namespace std;

class A
{
protected:
    int z = 100;

public:
    int a = 10;
    A()
    {
        cout << "A's Constructor\n";
    }
    void fun()
    {
        cout << "In A\n";
    }
    void showz()
    {
        cout << z << endl;
    }
};
class B : public A
{

public:
    B()
    {
        cout << "B's constructor\n";
    }
    void fun1()
    {
        cout << a << endl;
    }
    B(int b)
    {
        z = b;
    }
};
int main()
{
    B b;
    b.fun();
    b.fun1();
    B s(12);
    s.showz();
    return 0;
}
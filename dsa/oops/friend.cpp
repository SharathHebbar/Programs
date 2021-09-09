//friend function

#include<bits/stdc++.h>

using namespace std;

class A{
    int x;
    public:
    friend void fun(A& a){
        a.x = 100;
        cout<<a.x<<endl;
    }
};

int main(){
    A a;
    fun(a);
    return 0;
}

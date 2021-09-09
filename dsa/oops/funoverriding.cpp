/*
  Function Overriding
*/
#include<bits/stdc++.h>

using namespace std;

class A{
   public:

   void fun(){
       cout<<"Parent function\n";
   }
      
};
class B{
    public:
    void fun(){
        cout<<"Child function\n";
    }
};
int main(){
    B b;
    b.fun();
    return 0;
}
/*
   Operator overloading
*/
#include<bits/stdc++.h>

using namespace std;

class Complex{
   int r,i;
   public:
   Complex(){
       r = 0;
       i = 0;
   }
   Complex(int r1,int i1){
       r = r1;
       i = i1;
   }
   Complex operator +(Complex const &o){
       Complex res;
       res.r = o.r+r;
       res.i = o.i + i;
       return res;

   }
   void print(){
       cout<<r<<" + i"<<i<<endl;
   }
 
      
};

int main(){
    Complex c1(10,20),c2(12,14);
    Complex c3 = c1+c2;
    c3.print();
    return 0;
}
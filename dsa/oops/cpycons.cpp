/*
Demonstate copy constructor
*/

#include<bits/stdc++.h>

using namespace std;

class Box{
    int l,b,h;
    public:
        void set_dim(int l1,int b1,int h1){
            l = l1;
            h  =h1;
            b = b1;
        }
        void show(){
            cout<<"length: "<<l<<endl;
            cout<<"breadth: "<<b<<endl;
            cout<<"height: "<<h<<endl;
        }
        Box(){}
      
};
class Box1{
    
    public:
    int l,h,b;
        Box1(){
            l = 0;
            h = 0;
            b = 0;
        }
       
      void set(int l1,int b1,int h1){
            l = l1;
            h = h1;
            b = b1;
        }
        void display(){
            cout<<"length: "<<l<<endl;
            cout<<"breadth: "<<b<<endl;
            cout<<"height: "<<h<<endl;
        }
         Box1(Box1 &ob){
            l = ob.l;
            h = ob.h;
            b = ob.b;
        }
};
int main(){
    Box b1,b2;
    cout<<"\nUsing objects \n";
    b1.set_dim(10,12,14);
    b1.show();
    cout<<"\nShallow Copy Constructor\n";
    b2 = b1;
    b2.show();
    cout<<"\nDeep Copy Constructor\n";
    Box1 b3;
    b3.set(12,14,16);
    Box1 b4 = b3;
    b4.display();
    cout<<&b1<<" "<<&b2<<endl;
    cout<<&b3<<" "<<&b4<<endl;
    b1.set_dim(17,12,14);
    b1.show();
    b2.show();
    b3.set(10,14,16);
    b3.display();
    b4.display();

    return 0;
}
#include<bits/stdc++.h>

#define size_max 11

using namespace std;

int st[size_max];

class Stack{
    
    public:
    int top;
    int m=INT_MIN;
    Stack(){
        top = -1;
  
    }
    bool is_empty(){
        if(top == -1){
             cout<<"Stack underflow\n";
            return true;
        } 
        return false;
    }

    void push(int elem){
        if(top == size_max)
        {
            cout<<"Stack has reached its limit capacity. Stack overflow\n";
            return;
        }
        
        cout<<"Element "<<elem<<" has successfully inserted\n";
        st[top++] = elem;
        m = max(elem,m);


    }
    int pop(){
        if(is_empty())
            return -1;
        int temp = st[top--];
        cout<<"Popped out "<<temp<<endl;
        return temp;
    }
    void display(){
        if(is_empty()) return;
        int temp = top;
        cout<<"The contents of the stack are: \n";
        for(int i = temp;i>=0;i--){
            cout<<st[i]<<"\t";
        cout<<endl;
        }
    }
    int peek(){
        if(is_empty())return -1;
        return st[top];
    }
    int max_elem_stack(){
        if(is_empty())return -1;
        return m;

    }

};

int main(){
    Stack s;
    cout<<"------------------------Stack operation:-------------------------------------\n "<<endl;
    for(int i = 1;i<=10;i++)
       s.push(i);
     cout<<s.top<<endl;
    cout<<"peek: "<<s.peek()<<endl;
    //for(int i = 1;i<=5;i++)
       cout<<s.pop()<<endl;
    s.display();
    cout<<"peek: "<<s.peek()<<endl;
    cout<<"Max element: "<<s.max_elem_stack()<<endl;

  
}
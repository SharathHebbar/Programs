/*
Stack from scratch using arrays
*/

#include<iostream>

#define MAX 1000

using namespace std;
//------------------------------------------------------------------------------------
//defining stack
class Stack{
    public:
    Stack(){
        top = -1;
    }
    int top;
    int st[MAX];
    void push(int x);
    void pop();
    bool isEmpty();
    void display();
};

void Stack :: push(int x){
    if(top >= MAX){ 
        cout<<"Stack Overflow"<<endl;
        return;
        }
    st[++top] = x;
        cout<<x<<" is pushed onto stack "<<endl;
}

void Stack :: pop(){
    if(top < 0) {
        cout<<"Stack Underflow\n";
        return;
    }
    cout<<st[top--]<<" is deleted from stack\n";
}

void Stack:: display(){
    if(top < 0) {
        cout<<"Stack is empty\n";
        return;
    }
    cout<<"The contents of stack are: \n";
    int temp = top;
    while(temp>=0){
        cout<<st[temp--]<<"\t";
        
    }
    
} 

bool Stack :: isEmpty(){
    return (top >= 0);
} 

int main(){
    Stack s ;
    int val = 1;
    bool a;
    while(val){
        cout<<"\n\n-------------------------Stack operation----------------------------\n";
        cout<<"1.Push\n2.Pop\n3.Display\n4.Empty\n";
        cout<<"Enter your choice\n";
        int choice;
        cin>>choice;
        switch(choice){
            case 1: int x;
                    cout<<"Enter the data to be inserted\n";
                    cin>>x;
                    s.push(x);
                    break;
            case 2: s.pop();
                    break;
            case 3: s.display();
                    break;
            case 4: a = s.isEmpty();
                    if(a == true) cout<<"Stack is not empty\n";
                    else cout<<"Stack is empty\n";
                    break;
            default:cout<<"Enter a valid number\n";
                    break;
            
        }

    }
    
    return 0;
}
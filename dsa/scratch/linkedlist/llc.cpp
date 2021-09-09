//Linked List using class

#include<bits/stdc++.h>
#define null NULL

using namespace std;


class LinkedList{
    public:
        int data;
        LinkedList *next;
        LinkedList(){
            data = 0;
            next = null;
        }
        LinkedList(int data){
            this->data = data;
            next = null;
        }
        LinkedList(int data, LinkedList* v){
            this->data = data;
            next = v;
        }
};

int main(){
    LinkedList *ll;
    return 0;
}
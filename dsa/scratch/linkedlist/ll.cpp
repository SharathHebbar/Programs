/*

Build a Linked list from scratch

*/
#include <bits/stdc++.h>
#define null NULL

using namespace std;
//----------------------------------------------------------------------------------------------------------------
//structure of a linked list
struct LinkedList
{

    int data;
    struct LinkedList *next;
};
typedef struct LinkedList LinkedList;
LinkedList *start = null;

//----------------------------------------------------------------------------------------------------------------
//Checking if start is null

bool chkNull(){
    if(start == null){
        cout<<"Empty Linked list\n";
        return true;
    }
    else return false;
}


//----------------------------------------------------------------------------------------------------------------
//Insert at the beginning of the linked list

void insertAtBegin(int val)
{
    LinkedList *temp = (LinkedList *)malloc(sizeof(LinkedList));
    
    temp->data = val;
    temp->next = start;
    start = temp;
    cout<<val<<" inserted successfully"<<endl;

}
//----------------------------------------------------------------------------------------------------------------
//Insert at the end of the linked list

void insertAtEnd(int val)
{
    if(start == NULL){
        insertAtBegin(val);
        return;
    }
    LinkedList *temp = (LinkedList *)malloc(sizeof(LinkedList));
    LinkedList *curr = start;
    temp->data = val;
    temp->next = NULL;
    while(curr->next){
        curr = curr->next;
    }
    curr->next = temp;
    cout<<val<<" inserted successfully"<<endl;

}
//----------------------------------------------------------------------------------------------------------------
//Insert at specified position of the linked list

void insertAtPos(int val,int pos)
{
    if(pos <= 0){
        cout<<"Enter a valid position\nPosition starts from 1\n";
        return;
    }
    if(start == NULL || pos == 1){
        insertAtBegin(val);
        return;
    }
    LinkedList *temp = (LinkedList *)malloc(sizeof(LinkedList));
    LinkedList *curr = start;
    LinkedList *ahead;
    temp->data = val;
    --pos;
    while(--pos){
        curr = curr->next;
    }    
    ahead = curr->next;
    curr->next = temp;
    temp->next = ahead;
    cout<<val<<" inserted successfully"<<endl;
}

//----------------------------------------------------------------------------------------------------------------
//Delete an element from linked list

void delete_ll(int key) {
    if(chkNull()) return;
    if(start->data == key){
        cout<<"First occurance of "<<key <<" is deleted\n";
        LinkedList *temp = start;
        start = start->next;
        free(temp);
        return;
    }

    LinkedList *temp = start->next;
    LinkedList *prev = start;
    while(temp){
        if(temp->data == key){
            prev->next = temp->next;
            cout<<"First occurance of"<<key <<" is deleted\n";
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    cout<<"Element "<<key<<" not found"<<endl;
}

//----------------------------------------------------------------------------------------------------------------
//Displays content of linked list

void display() {
    if(chkNull()) return;
    
        LinkedList *temp = start;
        cout<<"The contents of linked list are: "<<endl;
        while(temp){
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<endl;
    
}

//----------------------------------------------------------------------------------------------------------------
//Reverse a Linked List

void reverse() {
    if(chkNull()) return;

    if(start->next == NULL) {
        cout<<"Linked list contains a single element\n";
        return;
    }
    LinkedList *prev,*cur,*ahead;
    prev = null;
    cur = start;
    ahead = start->next;
    
    while(ahead){
        cur->next = prev;
        prev = cur;
        cur = ahead;
        ahead = ahead->next;
    }
    cur->next = prev;
    start = cur;
    cout<<"Linked list reversed"<<endl;
}

//----------------------------------------------------------------------------------------------------------------
//Search an element from linked list

void search(int key){
    if(chkNull()) return;
    if(start->data == key){
        cout<<"Element "<<key<<" found\n";
        return;
    }
    LinkedList *temp=start;
    while(temp){
        if(temp->data == key){
            cout<<"Element "<<key<<" found\n";
            return;
        }
        temp = temp->next;
    }
    cout<<"Element "<<key<<" not found\n";
    
}

//----------------------------------------------------------------------------------------------------------------
//Sort a Linked List

void sort(){
    //should implement sorting in both ascending and descending
    if(chkNull()) return;
    vector<int> v;
    LinkedList *t = start,*h =start;

    if(start->next == NULL){
        cout<<"Linked List is already sorted as it contains only one item\n";
        return;
    }
    while(t){
       v.push_back( t->data);
       t = t->next;
    }
    sort(v.begin(),v.end());
    for(auto i: v){
        h->data = i;
        h = h->next;
    }
    cout<<"Linked List sorted\n"<<endl;
}


//----------------------------------------------------------------------------------------------------------------
//Driver program 

int main()
{
    int val;
    while (1)
    {
        cout<<"\n\n-----------------------LinkedList representation---------------------------\n\n";
        cout << "Enter your choice\n";
        cout << "1.Insert At Begin operation\n";
        cout << "2.Delete operation\n";
        cout << "3.Display operation\n";
        cout << "4.Reverse operation\n";
        cout << "5.Search operation\n";
        cout << "6.Insert At End operation\n";
        cout << "7.Insert At Specified position\n";
        cout << "8.Sorting the Linkedlist\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter the value to be inserted at the beginning: \n";
                cin >> val;
                insertAtBegin(val);
                break;

            case 2:
                cout << "Enter the value to be deleted\n";
                cin >> val;
                delete_ll(val);
                break;

            case 3:
                display();
                break;

            case 4:
                reverse();
                break;
                
            case 5:
                cout << "Enter the value to be searched: \n";
                cin >> val;
                search(val);
                break;

            case 6:
                cout << "Enter the value to be inserted at the end: \n";
                cin >> val;
                insertAtEnd(val);
                break;

            case 7:
                cout << "Enter the value to be inserted at specified position: \n";
                cin >> val;
                int pos;
                cout << "Enter the position where the value to be inserted at the end: \n";
                cin >> pos;
                insertAtPos(val,pos);
                break;
            
            case 8:
                sort();
                break;

            default:
                cout << "Enter a valid response\n ";
                exit(0);
        }
    }
    return 0;
}

//----------------------------------------------------------------------------------------------------------------
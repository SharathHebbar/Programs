#include <iostream>
#include <stdio.h>
#define null NULL

using namespace std;
int n, choice, value;
struct node
{
    int data;
    struct node *next;
};
struct node *start = null;
typedef struct node node;

int input_val(int data)
{

    cout << "Enter the data which needs to be inserted\n";
    cin >> data;
    return data;
}

/*
node* insert_at_begin(node* val,int data){


}*/

void insert_at_end(int data)
{
    node *temp, *newnode;
    newnode = start;
    temp = (node *)malloc(sizeof(node));
    while (newnode->next)
    {
        newnode = newnode->next;
    }

    temp->data = data;
    newnode->next = temp;
    temp->next = null;
}
/*
node* insert_at_pos(node* val,int data,int pos){


}

node* del_at_begin(node* val,int data){


}
node* del_at_end(node* val,int data){


}
node* del_at_pos(node* val,int data){


}
*/
void display()
{
    node *val;
    if (start == null)
    {
        cout << "Linked List is empty" << endl;
    }
    else
    {
        while (val)
        {
            cout << val->data << "\t";
            val = val->next;
        }
        cout << endl
             << endl;
    }
}

int main()
{

    cout << "Menu driven form" << endl;
    while (1)
    {
        cout << "-----------------------------------------------" << endl;
        cout << "1.Insert at the beginning" << endl;
        cout << "2.Insert at the end" << endl;
        cout << "3.Insert at specific position" << endl;
        cout << "4.Delete the element at beginning" << endl;
        cout << "5.Insert at the beginning" << endl;
        cout << "6.Delete at specific position" << endl;
        cout << "7.Delete the element at end" << endl;
        cout << "8.Display" << endl;
        cout << "9.Reverse" << endl;
        cout << "10.Sort linked list" << endl;
        cout << "any other choice to exit" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            break;

        case 2:
            n = input_val(n);
            insert_at_end(n);

            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            display();
            break;
        case 9:
            break;
        case 10:
            break;
        defualt:
            exit(0);
        }
    }

    return 0;
}

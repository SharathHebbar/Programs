#include <iostream>
#define null NULL

using namespace std;

struct LinkedList
{

    int data;
    struct LinkedList *next;
};
typedef struct LinkedList LinkedList;
LinkedList *head = null;

void insert(LinkedList head, int val)
{
    LinkedList *temp = (LinkedList *)malloc(sizeof(LinkedList));
    if (head == null)
    {
        temp->data = val;
        temp->next = null;
    }
}
void delete_ll(LinkedList head, int val) {}
void display(LinkedList head) {}
void reverse(LinkedList head) {}

int main()
{
    cout << "Linked List representation: " << endl;
    while (1)
    {
        cout << "Enter your choice\n";
        cout << "1.Insert\n";
        cout << "2.Delete\n";
        cout << "3.Display\n";
        cout << "4.Reverse\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int val;
            cout << "Enter the value to be inserted: \n";
            cin >> val;
            insert(head, val);
            break;
        case 2:
            int val;
            cout << "Enter the value to be deleted\n";
            cin >> val;
            delete_ll(head, val);
            break;
        case 3:
            display(head);
            break;
        case 4:
            reverse(head);
            break;
        default:
            cout << "Enter a valid response\n ";
            exit(0);
        }
    }
    return 0;
}
/*

Binary Search Tree from scratch

*/

//--------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>

#define null NULL

using namespace std;

//--------------------------------------------------------------------------------------------------
//structure
struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
};

typedef struct BST BST;
BST *root;

//--------------------------------------------------------------------------------------------------
//Allocating memory

BST *alloc_memory(int x)
{
    BST *temp;
    temp = (BST *)malloc(sizeof(BST));
    temp->data = x;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

//--------------------------------------------------------------------------------------------------
//Insert
BST *insert(BST *root, int val, int pos)
{

    if (root == NULL)
    {
        root = alloc_memory(val);

        return root;
    }
    if (pos == 0)
        root->left = insert(root->left, val, pos);
    else
        root->right = insert(root->right, val, pos);
    cout << "Element " << val << " inserted successfully\n";
    return root;
}

//--------------------------------------------------------------------------------------------------
//Preorder Traversal

void preorder(BST *root)
{
    if (root != NULL)
    {
        cout << root->data << endl;
        preorder(root->left);
        preorder(root->right);
    }
}

//--------------------------------------------------------------------------------------------------
//Inorder Traversal

void inorder(BST *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << endl;
        inorder(root->right);
    }
}

//--------------------------------------------------------------------------------------------------
//Postorder Traversal

void postorder(BST *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << endl;
    }
}

//------------------------------------------------------
//

int c = 0;
// int helper(BST *root){}
int countChildsumequalroot(BST *root)
{
    if (root == null)
        return 0;
    if (root->left == null and root->right == null)
        return 0;
    if (root->left == null)
    {
        return countChildsumequalroot(root->right);
    }
    if (root->right == null)
    {
        return countChildsumequalroot(root->left);
    }
    if (root->right->data + root->left->data == root->data)
        c++;
    c += countChildsumequalroot(root->left) + countChildsumequalroot(root->right);
    return c;
}

//--------------------------------------------------------------------------------------------------
//Driver Code
int main()
{
    int val, pos;

    while (1)
    {
        cout << "\n\n-----------------------Binary Search Tree representation---------------------------\n\n";
        cout << "Enter your choice\n";
        cout << "1.Insert operation\n";
        cout << "2.Count the Sum of child is equal to root\n";
        cout << "3.Pre order traversal\n";
        cout << "4.In order traversal\n";
        cout << "5.Post order traversal\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value to be inserted into BST\n";
            cin >> val;
            cout << "Enter 0 for left 1 for right\n";
            cin >> pos;

            root = insert(root, val, pos);
            break;

        case 2:
            cout << countChildsumequalroot(root) << endl;
            break;

        case 3:
            cout << "Preorder traversal\n";
            preorder(root);
            break;

        case 4:
            cout << "Inorder traversal\n";
            inorder(root);
            break;

        case 5:
            cout << "Postorder traversal\n";
            postorder(root);
            break;

        default:
            exit(0);
        }
    }

    return 0;
}
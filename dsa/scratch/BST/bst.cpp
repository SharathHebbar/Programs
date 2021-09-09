/*

Binary Search Tree from scratch

*/

//--------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>

using namespace std;

//--------------------------------------------------------------------------------------------------
//structure
struct BST{
    int data;
    struct BST *left;
    struct BST *right;
};

typedef struct BST BST;
BST *root;

//--------------------------------------------------------------------------------------------------
//

BST* alloc_memory(int x){
    BST *temp;    
    temp = (BST *)malloc(sizeof(BST));
    temp->data = x;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}


//--------------------------------------------------------------------------------------------------
//Insert
BST* insert(BST *root,int val){

    if(root == NULL)
    {
        root = alloc_memory(val);
        
        return root;
    }
    if(val < root->data)
        root->left = insert(root->left,val);
    else root->right = insert(root->right,val);
    cout<<"Element "<<val<<" inserted successfully\n";
    return root;
}
//--------------------------------------------------------------------------------------------------
//Delete

void delBST(BST *root,int val){
    if(root == NULL) return root;
    if(root->val == val)
}

//--------------------------------------------------------------------------------------------------
//Preorder Traversal

void preorder(BST *root){
    if(root != NULL){
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

//--------------------------------------------------------------------------------------------------
//Inorder Traversal

void inorder(BST *root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
}

//--------------------------------------------------------------------------------------------------
//Postorder Traversal

void postorder(BST *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<endl;
      
    }
}

//--------------------------------------------------------------------------------------------------
//Chk whether the BST is Skewed or not

bool isSkew(BST *root){
    if(root == NULL){
        cout<<"Empty Binary Tree\n";
        return;
    }
    return false;
}

//--------------------------------------------------------------------------------------------------
//Search in a BST

bool search(BST *root,int val){
    if(root == NULL)
    return false;
    if(root->data == val) return true;
    return (search(root->left,val) || search(root->right,val)); 
}


//--------------------------------------------------------------------------------------------------
//Driver Code
int main(){
int val;
bool isSkewed = false;
bool searched = false;
//root = alloc_memory(20);

    while (1)
    {
        cout<<"\n\n-----------------------Binary Search Tree representation---------------------------\n\n";
        cout << "Enter your choice\n";
        cout << "1.Insert operation\n";
        cout << "2.Delete operation\n";
        cout << "3.Check if a BST is Skewed or not\n";
        cout << "4.Pre order traversal\n";
        cout << "5.In order traversal\n";
        cout << "6.Post order traversal\n";
        cout << "7.Search a value in a BST\n";
        // cout << "8.Sorting the Linkedlist\n";
        int choice;
        cin >> choice;
        switch (choice){
            case 1: cout<<"Enter the value to be inserted into BST\n";
                    cin>>val;
                    root = insert(root,val);
                    break;

            case 2: cout<<"Enter the value to be deleted from BST\n";
                    cin>>val;
                    delBST(root,val);
                    break;

            case 3: isSkewed = isSkew(root);
                    break;

            case 4: cout<<"Preorder traversal\n";
                    preorder(root);
                    break;
                
            case 5: cout<<"Inorder traversal\n";
                    inorder(root);
                    break;

            case 6: cout<<"Postorder traversal\n";
                    postorder(root);
                    break;    

            case 7: cout<<"Enter the value to be seached\n";
                    cin>>val;
                    searched = search(root,val);
                    if(searched)
                        cout<<"Element present in BST\n";
                    else
                        cout<<"Element not present in BST\n";
                    break;        
                    
            default: exit(0);
        }
    }

    return 0;

}
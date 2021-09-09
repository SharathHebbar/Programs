/*

Binary Search from scratch

*/

//----------------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------
//Recursive Binary Search

int recu_Bin_search(int arr[],int key,int low,int high){
int mid;

while(low <= high){
    mid = (low+high)/2;
    if(arr[mid] == key) return mid+1;
    if(key < arr[mid])
        
        return recu_Bin_search(arr,key,low,mid-1);
    else
        return recu_Bin_search(arr,key,mid+1,high);
}
return -1;
}


//----------------------------------------------------------------------------------------------------------------------------------------------
//Iterative Binary Search

int iter_Bin_search(int arr[],int key,int low,int high){

int mid;

while(low <= high){
    mid = (low+high)/2;
    if(arr[mid] == key) return mid+1;
    if(key < arr[mid])
        high = mid-1;
        
    else
        low = mid+1;
    
}
return -1;
}


//----------------------------------------------------------------------------------------------------------------------------------------------
//Driver code

int main(){
    int index,n;
    cout<<"Enter N: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array in a sorted fashion\n";
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    int key;
    cout<<"Enter the key value which needs to be searched: \n";
    cin>>key;
    int choice;
    cout<<"----------------Binary Search Implementation--------------------------\n";
        
    cout<<"Enter your choice\n1.Recursion\n2.Iterative\nelse.exit\n";
    cin>>choice;
    if(choice == 1){
        index = recu_Bin_search(arr,key,0,n-1);  
        if(index == -1)
            cout<<"Element "<<key<<" not found\n";
        else
            cout<<"Element "<<key<<" found using recursion at "<<index<<"th position \n";
    }
    else if(choice == 2){
        index = iter_Bin_search(arr,key,0,n-1);
        if(index == -1)
            cout<<"Element "<<key<<" not found\n";
        else
            cout<<"Element "<<key<<" found using iteration at "<<index<<"th position \n";
    }
    else{
        cout<<"----------------Exit--------------------------\n";
        exit(0);
    }
    return 0;
}


//----------------------------------------------------------------------------------------------------------------------------------------------

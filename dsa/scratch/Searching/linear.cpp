/*

Linear Search from scratch

*/


//----------------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>

using namespace std;


//----------------------------------------------------------------------------------------------------------------------------------------------
//Linear Search

void LinearSearch(int a[],int key,int n){
    if(a[0] == key ){
        cout<<"Element "<<key<<" found at first position\n";
        return;
    }
    for(int i = 0;i < n;i++){
        if(a[i] == key){ 
            cout<<"Element "<<key<<" found at "<<i<<"th position\n";
            return;
        }
    }
    cout<<"Element "<<key<<" not found\n";
}


//----------------------------------------------------------------------------------------------------------------------------------------------
//Driver Code

int main(){
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array values\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched\n";
    cin>>key;
    LinearSearch(arr,key,n);

    return 0;
}


//----------------------------------------------------------------------------------------------------------------------------------------------

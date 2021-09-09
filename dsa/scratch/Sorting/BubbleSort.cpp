/*

Bubble sort from scratch

*/
//---------------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>

using namespace std;

//---------------------------------------------------------------------------------------------------------------------------------------------
//sort the array using bubble sort

void Bubble_sort(int arr[],int n){
    int i,j,temp,swap = 0;
    for(i = 0;i<n-1;i++){
        for(j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
            
        }
        if(swap == 0) break;
    }
    cout<<"The sorted array is: \n";
    for(i = 0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
    
}

//---------------------------------------------------------------------------------------------------------------------------------------------
//Driver code


int main(){
    int n;
    cout<<"Enter N: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array \n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    Bubble_sort(arr,n);
    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------


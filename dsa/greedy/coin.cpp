/*
Greedy coin exchange problem
*/

#include<bits/stdc++.h>

using namespace std;

//------------------------------------------------------------------------------------
//function returns the minimum number of coins to make an amount

int coinExchange(int n,int coins[],int amount){
    if(amount == 0 || n == 0) return 0;
    sort(coins,coins+n,greater<int>());
    
    int res = 0,d = 0;
    for(int i = 0;i < n;i++){
        if(coins[i] <= amount ){

            d = amount/coins[i];
            res += d;
        }
            
        amount = amount - (d*coins[i]);
        d = 0;
        if(amount == 0) break;
    }
    return res;

}

//-----------------------------------------------------------------------------------
//Driver program

int main(){
    int test_case;
    cout<<"enter the number of test cases\n";
    cin>>test_case;
    while(test_case--){
        int num_of_coins;
        cout<<"Enter number of coins\n";
        cin>>num_of_coins;
        int arr[num_of_coins];
        cout<<"Enter the denominations of the coins\n";
        for(int i=0;i<num_of_coins;i++){
            cin>>arr[i];
        }
        int amount;
        cout<<"Enter the amount\n";
        cin>>amount;
        int coin = coinExchange(num_of_coins,arr,amount);
        cout<<"The minimum number of coins to make the amount is "<<coin<<endl;
    }
}
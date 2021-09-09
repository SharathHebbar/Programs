/*

You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

 

Example 1:

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
Example 2:

Input: coins = [2], amount = 3
Output: -1
Example 3:

Input: coins = [1], amount = 0
Output: 0
Example 4:

Input: coins = [1], amount = 1
Output: 1
Example 5:

Input: coins = [1], amount = 2
Output: 2


*/

#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;
int coinChange(vector<int> coins, int amount) {
    
    int n = coins.size();
    if(n == 0) return -1;
    
    int dp[amount+1];
    for(int i = 0;i<=amount ;i++) dp[i] = INT_MAX;

for(int i = 0;i<=amount ;i++) cout<<dp[i]<<"\t";
cout<<endl;
    dp[0] = 0;

for(int i = 0;i<=amount ;i++) cout<<dp[i]<<"\t";
cout<<endl;


    for(int i = 0;i<n;i++){
        for(int j = 0;j <= amount;j++){
            cout<<dp[j]<<"\t";
            cout<<j<<"\t";

            if(j >= coins[i]){
                cout<<dp[j]<<"beforeif\t";
                dp[j] = min(dp[j],1+dp[j-coins[i]]);
                cout<<dp[j]<<"afterif\t";
            }
            else {
                cout<<dp[j]<<"beforeelse\t";
                if(dp[j] == INT_MAX) {dp[j] = -1;
            cout<<dp[j]<<"AFTERelse\t";}
            }
        }
    }
    return dp[amount+1] ;
    
}

int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i = 0;i<n;i++){
        int z;
        cin>>z;
        a.push_back(z);
    }
    int amt;
    cin>>amt;
    cout<<"op:"<<coinChange(a,amt);
 return 0;   
}
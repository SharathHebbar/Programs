/*
The task is to find the smallest number with given sum of digits as S and number of digits as D.

 

Example 1:

Input:
S = 9 
D = 2
Output:
18
Explanation:
18 is the smallest number
possible with sum = 9
and total digits = 2.

 

Example 2:

Input:
S = 20
D = 3
Output:
299
Explanation:
299 is the smallest number
possible with sum = 20
and total digits = 3.

 

Your Task:

You don't need to read input or print anything. Your task is to complete the function smallestNumber() which takes the two integers S and D and returns a string which is the smallest number if possible, else return "-1".

 

Expected Time Complexity: O(D)
Expected Auxiliary Space: O(1)

 

Constraints:
1 ≤ S ≤ 100
1 ≤ D ≤ 6
*/

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
        // code here 
        if((S > 9 && D == 1) || S > D*9) return "-1";
        if(S < 9 && D == 1) return to_string(S);
        int res[D];
        S = S-1;
        for(int i=D-1;i >0;i--){
            if(S > 9){
                res[i] = 9;
                S -=9;
            }
            else{
                res[i] = S;
                S = 0;
            }
        }
        res[0] = S+1;
        for(int i =0;i<D;i++){
            cout<<res[i]<<"\t";
        }
        cout<<endl;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends
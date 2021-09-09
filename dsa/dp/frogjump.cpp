    /*
    A - Frog 1  / 
    Time Limit: 2 sec / Memory Limit: 1024 MB

    Score : 
    100
    points

    Problem Statement
    There are 
    N
    stones, numbered 
    1
    ,
    2
    ,
    …
    ,
    N
    . For each 
    i
    (
    1
    ≤
    i
    ≤
    N
    ), the height of Stone 
    i
    is 
    h
    i
    .

    There is a frog who is initially on Stone 
    1
    . He will repeat the following action some number of times to reach Stone 
    N
    :

    If the frog is currently on Stone 
    i
    , jump to Stone 
    i
    +
    1
    or Stone 
    i
    +
    2
    . Here, a cost of 
    |
    h
    i
    −
    h
    j
    |
    is incurred, where 
    j
    is the stone to land on.
    Find the minimum possible total cost incurred before the frog reaches Stone 
    N
    .

    Constraints
    All values in input are integers.
    2
    ≤
    N
    ≤
    10
    5
    1
    ≤
    h
    i
    ≤
    10
    4
    Input
    Input is given from Standard Input in the following format:

    N

    h
    1
    
    h
    2
    
    …
    
    h
    N

    Output
    Print the minimum possible total cost incurred.

    Sample Input 1 
    Copy
    4
    10 30 40 20
    Sample Output 1 
    Copy
    30
    If we follow the path 
    1
    → 
    2
    → 
    4
    , the total cost incurred would be 
    |
    10
    −
    30
    |
    +
    |
    30
    −
    20
    |
    =
    30
    .

    Sample Input 2 
    Copy
    2
    10 10
    Sample Output 2 
    Copy
    0
    If we follow the path 
    1
    → 
    2
    , the total cost incurred would be 
    |
    10
    −
    10
    |
    =
    0
    .

    Sample Input 3 
    Copy
    6
    30 10 60 10 60 50
    Sample Output 3 
    Copy
    40
    If we follow the path 
    1
    → 
    3
    → 
    5
    → 
    6
    , the total cost incurred would be 
    |
    30
    −
    60
    |
    +
    |
    60
    −
    60
    |
    +
    |
    60
    −
    50
    |
    =
    40
    .
    */
    #include<bits/stdc++.h>


    using namespace std;


    int frogJump(int arr[],int n){
        if(n<=2){
            if(n == 0 || n==1 ) return 0;
            
            if(n == 2) return abs(arr[0]- arr[1]);
        }
        int dp[n + 1];
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = abs(arr[0]- arr[1]);
        for(int i = 3;i<=n;i++){
            
                dp[i] = min(
                    abs(arr[i-1]-arr[i-2])+dp[i-1],
                    abs(arr[i-1] - arr[i-3])+dp[i-2]
                );
        }
        return dp[n];

    }
    /* 

    int n;
    int memo[100];
    //Memoization
    int frogJump(int arr[],int n){
        if(memo[n] == INT_MAX){
            int r;
            if (n == 0) r  = n;
            else if (n == 1) r = 0;
            else if(n == 2) r = (abs(arr[0]- arr[1]));
            else if(n == 3) r = min(abs(arr[0]-arr[2]), (abs(arr[0]-arr[1])+abs(arr[1]-arr[2])));
            else r = min((arr[n-1]+frogJump(arr,n-2)),(abs(arr[n-1]-arr[n-2])+frogJump(arr,n-3)));
            memo[n] = r;
        }
        return memo[n];
    }*/
    /*//Recursion
    int frogJump(int arr[],int n){
        if (n == 0) return = 0;
        if (n == 1) return arr[0];
        if(n == 2) return (abs(arr[0]- arr[1]));
        if(n == 3) return min(abs(arr[0]-arr[2]), (abs(arr[0]-arr[1])+abs(arr[1]-arr[2])));
        return min((arr[n-1]+frogJump(arr,n-2)),(abs(arr[n-1]-arr[n-2])+frogJump(arr,n-3)));
    }
    */

    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i <n;i++){
            cin>>arr[i];
        }
        //   for(int i = 0;i <=n;i++){
            
        //     memo[i] = INT_MAX;
        // }
        cout<<frogJump(arr,n)<<endl;
    }

    /*
    Hemant
    #include<bits/stdc++.h>
using namespace std;
int frogJump(int *arr,int n,int ind,int *memo)
{   if(n == 0) return 0;   
    if(memo[ind]!=INT_MAX)
    return memo[ind];
    if(ind==n-1)
        return memo[ind]=0;
    if(ind==n-2)
        return memo[ind]=abs(arr[n-2]-arr[n-1]);
    return memo[ind]=min(abs(arr[ind+1]-arr[ind])+frogJump(arr,n,ind+1,memo),abs(arr[ind+2]-arr[ind])+frogJump(arr,n,ind+2,memo));
}
int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int memo[n];
    for(int i=0;i<n;i++)
        memo[i]=INT_MAX;
    cout<<frogJump(arr,n,0,memo);
    return 0;
}

    */

   /*
 Suhas  
   #include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1(n);
    v1[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 1)
            v1[i] = abs(v[i] - v[i - 1]);
        if (i > 1)
        {
            v1[i] = min(v1[i - 1] + abs(v[i] - v[i - 1]), v1[i - 2] + abs(v[i] - v[i - 2]));
        }
    }
    cout << v1[n - 1];
    return 0;
}
   
   */
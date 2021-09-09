/*

Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while preserving the order.
Note: All occurrences of every character in ‘str1’ should map to the same character in ‘str2’

Example 1:

Input:
str1 = aab
str2 = xxy
Output: 1
Explanation: There are two different
charactersin aab and xxy, i.e a and b
with frequency 2and 1 respectively.

Example 2:

Input:
str1 = aab
str2 = xyz
Output:
Explanation: There are two different
charactersin aab but there are three
different charactersin xyz. So there
won't be one to one mapping between
str1 and str2.

Your Task:
You don't need to read input or print anything.Your task is to complete the function areIsomorphic() which takes the string str1 and string str2 as input parameter and  check if two strings are isomorphic. The function returns true if strings are isomorphic else it returns false.

Expected Time Complexity: O(|str1|+|str2|).
Expected Auxiliary Space: O(Number of different characters).
Note: |s| represents the length of string s.

Constraints:
1 <= |str1|, |str2| <= 2*104



*/




// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.size() != str2.size() ) return false;
        int alphamap1[26];
        int alphamap2[26];
        for (int  i= 0;i<26;i++){ 
            alphamap1[i] = 0;
            alphamap2[i] = 0;
        }
        int s1[str1.size()];
        int s2[str2.size()]; 
        for(int i = 0;i<str1.size();i++){ 
            s1[i] = 0;
            s2[i] = 0;
        }
        // Your code here
        for(int i= 0;i<str1.size();i++){
            
            if(alphamap1[int(str1[i])-97] == 1) alphamap1[int(str1[i])-97] +=1;
            else alphamap1[int(str1[i])-97] = 1;    
            s1[i] = alphamap1[int(str1[i])-97];
        }
        for(int i= 0;i<str2.size();i++){
            
            if(alphamap2[int(str2[i])-97] == 1) alphamap2[int(str2[i])-97] +=1;
            else alphamap2[int(str2[i])-97] = 1;    
            s2[i] = alphamap2[int(str2[i])-97];
        }
        for(int i = 0; i <str1.size();i++){
            if(s1[i] != s2[i]) return false;
        }
        return true;
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends
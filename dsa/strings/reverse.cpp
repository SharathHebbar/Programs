
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    string reverseWords(string s) 
    { 
      int n = s.size();
      string r = "";
       string res = "";
      for(int i = n-1;i>=-1;i--){
         
          if(s[i] == '.'){
              reverse(res.begin(),res.end());
              r+=res;
             
              r+=".";
              res.clear();
          }
          else if(i < 0){
               reverse(res.begin(),res.end());
              r+=res;
              res.clear();
          }
          else{
              res += s[i];
             
          }
           
      }
      return r;
    } 
};

int main() 
{ 
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl; 
} 
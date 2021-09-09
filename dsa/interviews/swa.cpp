#include<bits/stdc++.h>
using namespace std;

int calc(int a,int b)
{
    int d = a;
    int r = 0;
    int val=0;
    vector<int> v1;
    vector<int> v2;
    while(d > 0)
    {
        r = d%10;
        v1.push_back(r);
        d = d/10;   
    }

    d = b;
    while(d > 0){
        r = d%10;
        v2.push_back(r);
        d = d/10;
    }
   
    int j = 0;
    int z=0,carry=0;
    vector<int> v3;
    if(v1.size() == 1 && v2.size()== 1){
        val = v1[j]+v2[j];
        if(val == 11) val = 15;
    return val;
    }
    while(j < v1.size() || j < v2.size()){
        int y = v1[j]+v2[j]+carry;
        carry = 0;
        if(y > 9){
            
            if(y == 11) y = 15;
            z = y % 10;
            carry = y /10;
            v3.push_back(z);
            }
        else{
            v3.push_back(y);
        }
           j++;
        }
        if(carry > 0) v3.push_back(carry);
         reverse(v3.begin(),v3.end());
         
         for(int i:v3)
         {
             val = val*10+i;
         }
       
    return val;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<calc(a,b)<<endl;
    return 0;
}
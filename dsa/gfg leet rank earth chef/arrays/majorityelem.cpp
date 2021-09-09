/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.
*/

#include<bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& nums) {
    
        int n=nums.size();
        int res=(n+1)/2;
        int result = 0;
        sort(nums.begin(),nums.end());
        int count=1,ans;
        int i = 0,j = 1;
        while(j < n){
            if(nums[i] == nums[j])
                count++;
            else count = 1;
                i++;
                j++;
           
            result = max(result,count);
          
            if(count >= res) ans = nums[i];
        }
        
        return ans;
    }
    
    
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i = 0;i <n;i++){
    int a;
    cin>>a;
    nums.push_back(a);
    }
    cout<<majorityElement(nums);
    return 0;
}
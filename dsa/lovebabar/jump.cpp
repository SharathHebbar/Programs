#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

int mini(int x, int y) { return (x < y) ? x : y; }

int jumps(vector<int> a,int n){
vector<int> minjumps;
for(int i = 0;i<n;i++)
  minjumps.push_back(INT_MAX);

minjumps[0] = 0;

for(int i = 1;i<n;i++){
for(int j = 0;j<i;j++){
if(i <= (a[j]+j) && minjumps[j] != INT_MAX){
  minjumps[i] = mini(minjumps[i],minjumps[j]+1);
  
}
}
}
  return minjumps[n-1] < INT_MAX ? minjumps[n-1]: 0;
}

int main(){
int n;
 cin>>n;
vector<int> a;
for(int i = 0;i < n;i++){
  int z;
  cin>>z;
  
  a.push_back(z);
} 

  cout<<jumps(a,n)<<endl;
}
/*

You are given two strings A and B that are made of lowercase English alphabets. 
Find the number of different pairs ((i,j), (k,l)) 
such that the substrings A[i…j] and B[k…l] are equal and the value of j-i+1 is minimum.

*/

#include<bits/stdc++.h>

using namespace std;

// Solution to Q1
int smallest_common_substrings(string A, string B) {
    int sum = 0;
	// char freq[256] = {0};
	// for (char c : A) {
	// 	freq[c]++;
	// }
	// for (char c : B) {
	// 	sum += freq[c];
	// }
    int i = 0,k=0,j=A.size()-1,l=B.size()-1;
    while(i <= j && k <=l){
        if(A[i] == A[j]) return 
    }

	return sum;
}


int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<smallest_common_substrings(s1,s2)<<endl;

}
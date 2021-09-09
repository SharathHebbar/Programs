#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int c,e;
	unordered_map<string, string>m;
	unordered_map<string, int>r1;
	unordered_map<string, int>r2;
	cin>>c>>e;
	while(c--){
	    string name,place;
	    cin>>name>>place;
	   m.insert({name,place});
	}
	string email[e];
	for(int i=0;i<e;i++){
	    string mail;
	    cin>>mail;
	    email[i] = mail;
	}
	
	for(int x= 0;x <e;x++){
		for(auto z:m){
	    if(email[x] == z.first){
	        r1.insert({email[x],0});
	    }
	    if(email[x] == z.second){
	        r2.insert({email[x],0});
	    }
		
	}
	}
	
	for(int x = 0;x < e;x++){
		for(auto z:m){
	     if(email[x] == z.first){
	        r1[email[x]]++;
	    }
	    if(email[x] == z.second){
	        r2[email[x]]++;
	    }
	}
	}
	for(auto z:m){
	    cout<<z.first<<"\t"<<z.second<<endl;
	}
	for(auto z:r1){
		cout<<"r1"<<endl;
	    cout<<z.first<<"\t"<<z.second<<endl;
	}
		for(auto z:r2){
	    cout<<z.first<<"\t"<<z.second<<endl;
	}
	int maxi = 0;
	for(auto z:r1){
		maxi = max(z.second,maxi);
	}
	cout<<maxi;
	
	return 0;
}

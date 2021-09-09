#include<bits/stdc++.h>

using namespace std;

void ranked(vector<int> v,int n){
    pair<int,int> p[n];
    for(int i = 0;i <n;i++){
        p[i] = make_pair(v[i],i);
    }
    sort(p,p+n);
    
    vector<double>r(n);
    for(int i= 0;i<n;i++)r[i] = i+1;
    

    map<int,int> m;
    for(int i = 0;i<n;i++){
        m[p[i].first]++;
    }


    int w = 0,f1= 0,f2 = 0;
    int z = 0;
    int i = 0;
    while(i<n){
        int c= m[p[i].first];
       
       if(c>1){
            for(int j =i;j<i+c;j++){
            z+= r[j];

            f1++;
        }   
        double val = double(z)/double(c);
        for(int j =i;j<i+c;j++){
            r[j] = val;

            f2++;

        }
       }
       
        i+=c;
        z = 0;
        w++;
    }

    
    pair<int, double> ans[n];
    for(int i = 0;i<n;i++){
        ans[i] = make_pair(p[i].second,r[i]);
    }
    sort(ans,ans+n);
    for(int i =0;i<n;i++)        cout<<ans[i].second<<"\t";cout<<endl;
    cout<<"w: "<<w<<"\tf1: "<<f1<<"\tf2: "<<f2<<endl;
}



int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      
        cin>>v[i];
    }
    ranked(v,n);
   
    
}
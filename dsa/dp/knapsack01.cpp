#include<bits/stdc++.h>

using namespace std;
int i;

int rec_kp(vector<int> wt,vector<int> val,int c,int n){
    if(n == 0 || c == 0)
        return 0;
    if(wt[n-1] <= c)
        return max((val[n-1] + rec_kp(wt,val,c-wt[n-1],n-1)), rec_kp(wt,val,c,n-1));
    return rec_kp(wt,val,c,n-1);
}

int mem_kp(vector<int> wt,vector<int> val,int c,int n){

return 0;
}

int tab_kp(vector<int> wt,vector<int> val,int c,int n){

return 0;
}



int main(){
    int n,m;
    cout<<"Enter the value of n\n";
    cin>>n;
    
    vector<int> wt;
    vector<int> val;

    for(i = 0;i<n;i++){
        int w;
        cin>>w;
        wt.push_back(w);
    }

    for(i = 0;i<n;i++){
        int w;
        cin>>w;
        val.push_back(w);
    }
    int C;
    cout<<"Enter capacity: \n";
    cin>>C;
    while (1){
    {
        /* code */
    }
    
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"0/1 Knapsack"<<endl;
    cout<<"Enter your choice\n";
    cout<<"1.Recursive\n2.Memoization\n3.Tabulation\n";
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            m = rec_kp(wt,val,C,n);
            cout<<"The Maximum capacity of Knapsack using recusion is: "<<m<<endl;
            break;
        case 2:
            m = mem_kp(wt,val,C,n);
            cout<<"The Maximum capacity of Knapsack using memoization is: "<<m<<endl;
            break;
        case 3:
            m = tab_kp(wt,val,C,n);
            cout<<"The Maximum capacity of Knapsack using tabulation is: "<<m<<endl;
            break;
        default:
        cout<<"Enter a valid choice \n";
            exit(0);
    }
}
    return 0;
}
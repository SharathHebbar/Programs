
//Creation of Ajacency matrix and list for graph

#include<bits/stdc++.h>

using namespace std;

//--------------Adjacency List-------------------------------

void addEdge(vector<int>adj[],int u,int v ){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    int v = 5;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,2,1);
    addEdge(adj,3,1);
    for(int i = 0;i<v;i++){
        for(int j:adj[i])
        cout<<j<<" ";
        cout<<endl;
    }
}


//------------------adjacency matrix-----------------------------

// void connected(int a[][5]){
    
//     for(int i =0;i<5;i++){
//         for(int j = 0;j<5;j++){
//             if(a[i][j] == 1)
//                 cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }


//  void addEdge(int adj[][5],int u,int v){ 

//     adj[u][v] = 1;
//     adj[v][u] = 1;
// }

// int main(){

//     int v = 4;
//     int adj[5][5] = {0};
//     addEdge(adj,0,1);
//     addEdge(adj,0,2);
//     addEdge(adj,1,2);
//     addEdge(adj,3,1);

//     for(int i=0;i<=v;i++){
//     for(int j =0;j<=v;j++)
//         cout<<adj[i][j]<<"\t";
    
//     cout<<endl;
//     }

//     connected(adj);
// }
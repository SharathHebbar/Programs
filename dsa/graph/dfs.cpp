
//DFS traversal of grapha
#include<bits/stdc++.h>

using namespace std;

/*

Traversal for separate graph

*/
//adds edges to the graph
void addEdge(vector<int>adj[],int u,int v ){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

//bfs traversal


void DFS(vector<int>adj[],int s,bool visited[]){
    
    visited[s] = true;
    cout<<s<<" ";
    for(int i : adj[s]){
        if(visited[i] == false){
            DFS(adj,i,visited);
        }
    }
    
}

void DFSRec(vector<int>adj[],int v){
    int c = 0;
    bool visited[v];
    for(int j=0;j<v;j++)
        visited[j] = false;
    for(int i =0;i<v;i++){
        if(visited[i] == false){
            DFS(adj,i,visited);
            c++;
        }
    }
    cout<<"\nSeparate component count: "<<c<<endl;
}

int main(){
    int v;
    cout<<"Enter num of vertices: ";
    cin>>v;
   
    vector<int>adj[v];
    int edges;
    cout<<"Enter the num of edges: ";
    cin>>edges;
    if(edges > ((v*v-1)/2)) {
        cout<<"Edges cannot be more than (v*v-1)/2\n";
        exit(0);
    }
    cout<<"Enter from and to edges\n";
    while(edges--){
        int f,t;
        cin>>f>>t;
        addEdge(adj,f,t);
    }
    cout<<endl<<"The contents of graph\n";
    for(int i = 0;i<v;i++){
        for(int j:adj[i])
        cout<<j<<" ";
        cout<<endl;
    }
    cout<<"BFS traversal of the graph\n";
    DFSRec(adj,v);
}
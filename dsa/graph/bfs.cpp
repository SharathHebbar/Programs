
//BFS traversal of graph
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


void BFS(vector<int>adj[],int s,bool visited[]){
    
    visited[s] = true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int z:adj[u])
        {
            if(visited[z] == false){
                visited[z] = true;
                q.push(z);
            }
        }
    }
    cout<<endl;
}

void BFSDir(vector<int>adj[],int v){
    int c = 0;
    bool visited[v+1];
    for(int j=0;j<=v;j++)
        visited[j] = false;
    for(int i =0;i<v;i++){
        if(visited[i] == false){
            BFS(adj,i,visited);
            c++;
        }
    }
    cout<<"Separate component count: "<<c<<endl;
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
    BFSDir(adj,v);
}


/*

For single graph

*/

// //adds edges to the graph
// void addEdge(vector<int>adj[],int u,int v ){
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }

// //bfs traversal
// void BFS(vector<int>adj[],int v,int s){
//     bool visited[v+1];
//     for(int j=0;j<=v;j++)
//         visited[j] = false;
//     visited[s] = true;
//     queue<int> q;
//     q.push(s);
//     while(!q.empty()){
//         int u = q.front();
//         q.pop();
//         cout<<u<<" ";
//         for(int z:adj[u])
//         {
//             if(visited[z] == false){
//                 visited[z] = true;
//                 q.push(z);
//             }
//         }
//     }
//     cout<<endl;
// }

// int main(){
//     int v;
//     cout<<"Enter num of vertices: ";
//     cin>>v;
   
//     vector<int>adj[v];
//     int edges;
//     cout<<"Enter the num of edges: ";
//     cin>>edges;
//     if(edges > ((v*v-1)/2)) {
//         cout<<"Edges cannot be more than (v*v-1)/2\n";
//         exit(0);
//     }
//     cout<<"Enter from and to edges\n";
//     while(edges--){
//         int f,t;
//         cin>>f>>t;
//         addEdge(adj,f,t);
//     }
//     cout<<endl<<"The contents of graph\n";
//     for(int i = 0;i<v;i++){
//         for(int j:adj[i])
//         cout<<j<<" ";
//         cout<<endl;
//     }
//     int s;
//     cout<<"Enter the source vertex: ";
//     cin>>s;
//     cout<<"BFS traversal of the graph\n";
//     BFS(adj,v,s);
// }

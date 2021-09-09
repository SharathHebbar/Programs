//Shortest Path

#include<bits/stdc++.h>

using namespace std;

vector<int> shortestPath(vector<int>adj[],int v,int s){
    vector<int> dist(v,INT_MAX) ;
    bool visited[v] = {false};
    dist[s] = 0;
    visited[s] = true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int w:adj[u]){
            if(visited[w] == false){
                visited[w] = true;
                dist[w] = 1+dist[u];
                q.push(w);
            }
        }
    }
    return dist;
}

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);

}

int main(){
    int v;
    cin>>v;
    vector<int> adj[v];
    int e;
    cin>>e;
    if(e > (v* v-1)/2) exit(0);
    while(e--){
        int f,t;
        cin>>f>>t;
        addEdge(adj,f,t);
    }
    int s;
    cin>>s;
    vector<int> y = shortestPath(adj,v,s);
    for(int i =0;i<v;i++){
        cout<<y[i]<<" ";
    }
    cout<<endl;

}
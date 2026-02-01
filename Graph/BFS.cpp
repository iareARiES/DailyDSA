//GRAPH TRAVERSELS

//How to save a graph list approach 
#include <iostream>
#include <vector>
using namespace std;
 

int main(){
    cout<<"Enter the number of the nodes: "<<endl;
    int n, m;
    vector<int> adj[n+1];

    //undirected graph
    for(i=0;i<m;i++){
        cout<<"Enter all the connected nodes: "<<endl;
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i =0;i<n;i++){
        cout<<i<<" -> "<<adj[i];
    }

    return 0;
}

//GRAPH TRAVERSELS

//How to save a graph list approach 
#include <iostream>
#include <vector>
using namespace std;
 

int main(){
    int n, m;
    cout<<"Enter the number of the nodes: "<<endl;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);

    //undirected graph
    for(int i=0;i<m;i++){
        cout<<"Enter all the connected nodes: "<<endl;
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i =1;i<=n;i++){
        cout<<i<<" -> ";

        for(auto it : adj[i]){
            cout<< it <<" ";
        }
        cout<<endl;
    }

    return 0;
}

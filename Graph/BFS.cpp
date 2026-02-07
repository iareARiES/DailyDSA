//GRAPH TRAVERSELS
//How to save a graph list approach 
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution{
//BFS Traversal Technique
    public:
    vector<int> bfsOfGraph(int n, vector<vector<int>>& adj){
        int vis[n] = {0};
        vis[0] = 1; //created and marked the first element as 1 i.e visited
        queue<int> q;
        q.push(0); //push the elemnt in the queue
        vector<int> bfs; //store the bfs list
        while(!q.empty()){
            int node = q.front(); //start from the starting element
            q.pop(); //FIFO logic applied
            bfs.push_back(node);
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it] =1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }

//DFS Traversal technique

    void dfsTravel(int node, vector<vector<int>>& adj , vector<int> &dfs, int vis[]){
        vis[node]=1;
        dfs.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                dfsTravel(it,adj,dfs,vis);
            }
        }
    }
    vector<int> dfsOfGraph(int n, vector<vector<int>>& adj){
        int vis[n]={0}; //visited array
        int start =0; //starting node
        vector<int> dfs;  //stores the traversal
        dfsTravel(start,adj,dfs,vis);
        return dfs;    
    }
};

int main(){
    cout<<"Enter the number of the nodes: "<<endl;
    int n, m;
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
 
    cout<<"Adjecency list"<<endl;
    for(int i =0;i<=n;i++){
        cout<<i<<" -> ";
        for(auto it: adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    Solution sol;

    vector<int> bfs = sol.bfsOfGraph(n,adj);
    vector<int> dfs = sol.dfsOfGraph(n,adj);

    cout << "\nBFS: ";
    for (int x : bfs) cout << x << " ";

    cout << "\nDFS: ";
    for (int x : dfs) cout << x << " "; 

    return 0;
}
 
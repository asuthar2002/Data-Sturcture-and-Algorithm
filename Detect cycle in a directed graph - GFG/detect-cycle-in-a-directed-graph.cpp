//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int i,vector<int> adj[], vector<bool>&visted, vector<bool>&pvisted ){
        visted[i] = 1;
        pvisted[i]  = 1;
        for(auto it:adj[i]){
            if(!visted[it]){
                if(dfs(it, adj , visted, pvisted)) return true;
            }
            else {
                if(pvisted[it]) return true;
            }
        }
        pvisted[i] = 0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        
        vector<bool> visted(V,0);
        vector<bool> pvisted(V,0);
        for(int i=0; i<V; i++){
            if(!visted[i]){
                if(dfs(i,adj,visted, pvisted)) return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination ) return true;
        unordered_map<int,list<int>> m;
        for(auto it: edges){
            int u = it[0];
            int v = it[1];
            m[u].push_back(v);
            m[v].push_back(u);
        }
        if(m.find(source) == m.end() || m.find(destination) == m.end()) return false;
        vector<int> ans(n+1,0);
        queue<int> q;
        q.push(source);
        while(!q.empty())
        {
            int  node = q.front();
            q.pop();
            if(ans[node]) continue;
            if(node == destination) return true;
            ans[node] = 1;
            for(auto i:m[node]){
                q.push(i);
            }
        }
        return false;
    }
};
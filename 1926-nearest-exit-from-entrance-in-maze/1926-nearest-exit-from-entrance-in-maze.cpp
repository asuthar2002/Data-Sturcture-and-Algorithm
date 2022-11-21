class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,-1,1};
        int n = maze.size();
        int m = maze[0].size();
        queue<pair<int,int>> q;
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        q.push({entrance[0],entrance[1]});
        vis[entrance[0]][entrance[1]] = 1;
        int level  = 0;
        while(!q.empty())
        {
            int sz = q.size();
            level++;
            while(sz--)
            {
                auto it = q.front();
                q.pop();
                for(int i=0; i<4; i++)
                {
                    int n_r = it.first+dx[i];
                    int n_c = it.second+dy[i];
                   if( n_r>=0 && n_c>=0 && n_r<n && n_c<m && maze[n_r][n_c]=='.' && !vis[n_r][n_c]){
                        if( n_r == 0 || n_c==0 || n_r == n-1 || n_c == m-1) return level;
                        vis[n_r][n_c] = 1;
                        q.push({n_r, n_c});
                    }
                }
            }
        }
            return -1;
    }
};
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> row(n,vector<int> (2));
        vector<vector<int>> col(m,vector<int> (2));
        int z = 0;
        int o = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1) o++;
                else z++;
                // cout<<grid[i][j]<<" ";
            }
            row[i][0] = o;
            row[i][1] = z;
            o=0,z=0;
        }
        o=0,z=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[j][i] == 1)o++;
                else z++;
            }
            col[i][0] = o;
            col[i][1] = z;
            o=0,z=0;
        }
        vector<vector<int>> ans;
        
        for(int i=0; i<n; i++)
        {
            vector<int> res(m);
            for(int j=0;j<m; j++)
            {
                int a = col[j][0]+row[i][0];
                int b = col[j][1]+row[i][1];
                res[j] = a-b;
            }
            ans.push_back(res);
        }
        return ans;
    }
};
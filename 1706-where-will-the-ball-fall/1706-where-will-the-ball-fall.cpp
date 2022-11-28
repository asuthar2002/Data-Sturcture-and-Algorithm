class Solution {
public:
    int code (vector<vector<int> > &grid, int col , int row)
    {
        if(row >= grid.size()) return col;
        if(grid[row][col] == 1)
        {
            if(col == grid[0].size()-1 || grid[row][col+1] == -1) return -1;
            if(grid[row][col+1] == 1 ) return code(grid, col+1, row+1);
        }
        else if(grid[row][col] == -1){
            if(col == 0 || grid[row][col-1] == 1) return -1;
            if(grid[row][col-1] == -1) return code(grid, col-1, row+1);
        }
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size();
        vector<int> ans;
        for(int i=0; i<m ;i++)
        {
            int a = code(grid , i, 0);
            ans.push_back(a);
        }
        return ans ;
    }
};
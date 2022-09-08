class Solution {
public:
    
    bool placeable(vector<string> &board,int row ,int column, int n)
    {
        // for upper side of board;
        for(int i=row; i>=0; i--)
        {
            if(board[i][column] == 'Q') return false;
        }
        // for left diagonal ;
        int i=row, j=column; 
        while(i>=0 && j>=0)
        {
            if(board[i][j]=='Q') {
                return false;
            }
            i--, j--;
        }
        // for right diagonal;
        i=row,j=column;
        while(i>=0 && j<n)
        {
            if(board[i][j]=='Q')return false;
            i--,j++;
        }
        
        return true;
    }
    
    void code(vector<vector<string>> &ans, int n, int i, vector<string> &board)
    {
        if(i==n)
        {
            ans.push_back(board);
            return ;
        }
        int j;
        for(j=0;j<n;j++)
        {
            if(placeable(board,i,j,n))
            {
                board[i][j] = 'Q';
                code(ans,n,i+1,board);
                board[i][j] = '.';
            }
        }
    }
    
    
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>> ans;
        vector<string> board(n, string(n,'.'));
        code(ans,n,0,board);
        return ans;
        
    }
};
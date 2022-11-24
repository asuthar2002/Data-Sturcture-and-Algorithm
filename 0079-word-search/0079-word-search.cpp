class Solution {
public:
    bool code(vector<vector<char>> &board, string &word, int i, int j, int n){
        if(n==word.size()) return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j] != word[n]) return false;
        
        board[i][j] = '0';
        bool chk = code(board,word,i+1,j,n+1)|| code(board,word,i-1,j,n+1)|| code(board,word,i,j+1,n+1)|| code(board,word,i,j-1,n+1);
        board[i][j] = word[n];
        return chk;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                // if first word match and after all match return true;
                if(board[i][j] == word[0] && code(board,word,i,j,0)) return true;
            }
        }
        return false;
    }
};
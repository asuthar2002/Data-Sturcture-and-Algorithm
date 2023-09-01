class Solution {
public:
    void code(vector<vector<int>>&matrix, vector<int> ans){
        int i=ans[0];
        int j=ans[1];
        while(i>=0){
            matrix[i][j] = 0;i--;
        }
         i=ans[0];
        j=ans[1];
        while(j>=0){matrix[i][j] = 0;j--;}
        i=ans[0];
        j=ans[1];
        while(i<matrix.size()){ matrix[i][j] = 0;i++;}
         i=ans[0];
        j=ans[1];
        while(j<matrix[0].size()){ matrix[i][j] = 0;j++;}
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0)ans.push_back({i,j});
            }
        }
        for(int i=0; i<ans.size(); i++){
            code(matrix, ans[i]);
        }
    }
};
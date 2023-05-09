class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
            
        int row = matrix.size();
        int col = matrix[0].size();
        
        // indexing of row and column ;
        int rowstart = 0;
        int rowend = row-1;
        int colstart = 0;
        int colend = col-1;
        
        int count =0;
        int total = row*col;
        
        // now triversing the entire row and column of matrix using while loops ;
        while(count<total){
            
            //printing the first row of the matrix using for loop ;
            for(int index = colstart;count<total&& index <= colend;index++){
                ans.push_back(matrix[rowstart][index]);
                count++;
            }
            rowstart++;
            
            
            //printing the last column of the matrix 
            for(int index = rowstart; count<total&& index <=rowend; index++){
                ans.push_back(matrix[index][colend]);
                count++;
            }
            colend --;
            
            //printing the last row of the matrix;
            for(int index = colend; count<total && index>= colstart; index--){
                ans.push_back(matrix[rowend][index]);
                count++;
            }
            rowend--;
            
            //printing the first cloumn of the matrix ;
            for(int index = rowend; count<total&& index>=rowstart;index--){
                ans.push_back(matrix[index][colstart]);
                count++;
            }
            colstart++;
            
            
        }
        
        return ans;
        
    }
};
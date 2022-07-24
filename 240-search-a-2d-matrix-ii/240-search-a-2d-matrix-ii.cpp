class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowstart = 0;
        int rowend = matrix.size();
        int colend = matrix[0].size()-1;
        while(rowstart<rowend && colend>=0)
        {
            int element = matrix[rowstart][colend];
            if(element == target) return true;
            else if(target < element)
            {
                colend--;
            }
            else if(target > element)rowstart++;
        }
        return false;
    }
};
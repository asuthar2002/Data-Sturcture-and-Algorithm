class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;
        int left = 0,
            right = n-1,
            leftMax = 0,
            rightMax = 0;
        while(left<=right)
        {
            // there are two case if left is greater or right is greater;
            
        // left height is smaller
            if(height[left]<height[right])
            {
                
                if(leftMax<height[left]) //check if max left height is up to date or not  ;
                    leftMax = height[left];
                
                
                else     //else there is block to store the water so store it ;
                    water += (leftMax - height[left]);
                
                left++;
            }
            
        // if right height is smaller 
            else {
                
                
                if(rightMax<height[right])//similar check if right height is upto date or not ;
                    rightMax = height[right];

                else  //if upto date then there a water block;
                    water += (rightMax - height[right]);
                
                right--;
            }
        }
        return water;
    }
};
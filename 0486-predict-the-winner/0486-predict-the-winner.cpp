class Solution {
public:
    bool code(vector<int> &nums,int left, int right ,int p1, int p2, bool turn){
        if(left>right) return p1>=p2;
        if(turn){
            return code(nums,left+1, right,p1+nums[left], p2, !turn) || code(nums, left, right-1, p1+nums[right], p2, !turn );
        }
        else {
            return code(nums,left+1, right, p1, p2+nums[left], !turn ) && code(nums, left, right-1, p1,p2+nums[right], !turn);
        }
    }
    bool PredictTheWinner(vector<int>& nums) {
        return code( nums, 0,nums.size()-1, 0, 0, true);
    }
};
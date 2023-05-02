class Solution {
public:
    int arraySign(vector<int>& nums) {
        int mcount = 0;
        for(auto it: nums) {
            if(it<0) mcount++;
            else if(it == 0) return 0;
        }
        if(mcount%2 ==0) return 1;
        return -1;
    }
};
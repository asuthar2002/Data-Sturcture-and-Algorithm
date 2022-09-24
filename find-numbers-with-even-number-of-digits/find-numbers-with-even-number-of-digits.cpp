class Solution {
public:
    bool code(int n)
    {
        int cnt = 0;
        while(n>0)
        {
            n = n/10;cnt++;
        }
        if(cnt%2==0)return true;
        return false;
    }
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(code(nums[i]))cnt++;
        }
        return cnt;
    }
};
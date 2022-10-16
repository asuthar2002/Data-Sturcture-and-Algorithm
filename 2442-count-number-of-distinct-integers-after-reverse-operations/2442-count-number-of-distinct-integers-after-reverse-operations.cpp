class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
             int r = 0;
            int n = nums[i];
            while(n){
                r = r*10 + n%10;
                n = n/10;
            }
            nums.push_back(r);
        }
        sort(nums.begin(),nums.end());
        int cnt = 1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] != nums[i-1]) cnt++;
        }
        return cnt;
    }
};
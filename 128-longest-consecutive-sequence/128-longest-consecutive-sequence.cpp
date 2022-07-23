class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() == 0) return 0;
        int i=0,maxCnt = 0;
        int n= nums.size();
        int cnt =0;
        while(i<n-1)
        {
            cout<<nums[i]<<" ";
            if((nums[i]+1)==nums[i+1])
            {
                cnt++;i++;
            }
            else if(nums[i]==nums[i+1]){
                i++;
            }
            else {
                cnt = 0;i++;
            }
            // while(nums[i]==nums[i+1] && i<n-1) i++;
            
            maxCnt = max(maxCnt, cnt);
        }
        return maxCnt+1;
        
    }
};
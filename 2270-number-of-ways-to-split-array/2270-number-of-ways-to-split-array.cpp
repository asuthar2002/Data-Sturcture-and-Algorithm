class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int sum1 = 0;
        int n = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum1 += nums[i];
        }
        long long int sum2 = 0;
        for(int i=nums.size()-1; i>=1; i--)
        {
            sum2 += nums[i];
            sum1 -= nums[i];
            // cout<<sum1<<" "<<sum2<<" ";
            if(sum1>=sum2) n++;
            
        }
        // cout<<sum1;
        return n;
        
    }
};
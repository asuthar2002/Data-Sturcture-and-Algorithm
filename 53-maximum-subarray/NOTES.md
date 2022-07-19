int mxsum = nums[0], sum = nums[0];
for(int i=1; i<nums.size(); i++)
{
sum = max(nums[i] , sum+nums[i]);
if(mxsum<sum) mxsum = sum;
}
return mxsum;
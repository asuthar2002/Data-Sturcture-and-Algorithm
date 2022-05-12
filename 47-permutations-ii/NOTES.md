for(int i=idx;i<nums.size();i++)
{
if(i!=idx && nums[i]==nums[idx])    continue;
swap(nums[i],nums[idx]);
helper(nums,idx+1);
}
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
  sort(nums.begin(),nums.end());
  int closetsum=nums[0]+nums[1]+nums[2];
  for(int i=0;i<n;i++){
      int j=i+1;
      int k=n-1;
      while(j<k){
          int sum=nums[i]+nums[j]+nums[k];
          if(sum==target)return target;
          if(abs(sum-target)<abs(closetsum-target)){
              closetsum=sum;
          }
          if(target>sum)j++;
          else{
              k--;
          }
      }
  }
        
  return closetsum;
    }
};
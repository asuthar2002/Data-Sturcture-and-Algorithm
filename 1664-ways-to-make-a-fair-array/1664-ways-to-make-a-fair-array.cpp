class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int esum  =0;
        int osum = 0;
        for(int i=0; i<nums.size(); i++){
            if(i%2) osum+=nums[i];
            else esum+=nums[i];
        }
        int cnt =0;
        int sesum = 0;
        int sosum =0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0)esum-=nums[i];
            else osum-=nums[i];
            if((esum+sesum)==(osum+sosum)) cnt++;
            if(i%2==0) sesum-=nums[i];
            else sosum-=nums[i];
        }
               return cnt;
        
    }
};
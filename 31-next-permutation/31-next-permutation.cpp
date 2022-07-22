#include<bits/stdc++.h>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //there are two ways to find next permuataton;
        // next_permutation(nums.begin(),nums.end());
        
        int index = -1;
        for(int i=nums.size()-1; i>0; i--)
        {
            if(nums[i-1]<nums[i])
            {
                index = i-1;break;
            }
        }
        if(index == -1){
            
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>0; i--){
            if(nums[i]>nums[index]) 
            {
                swap(nums[i],nums[index]);
                reverse(nums.begin()+index+1, nums.end());
                break;
            }
        }
    }
};
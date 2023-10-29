class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long int cnt1 =0, cnt2 = 0;
        long long int sum1 = 0, sum2  = 0;
        for(auto it:nums1){
            if(it==0)cnt1++;
            sum1+=it;
        }
        for(auto it:nums2){
            if(it==0)cnt2++;
            sum2+=it;
        }
        if(cnt1==0 and (cnt2+sum2>sum1+cnt1))return -1;
        if(cnt2==0 and (cnt1+sum1>sum2+cnt2)) return -1;
        sum1+=cnt1;
        sum2+=cnt2;
        return max(sum2,sum1);
    }
};
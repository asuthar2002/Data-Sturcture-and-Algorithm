class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<long long int> v;
        for(int i=0; i<nums1.size(); i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        double ans = 0;
        if(v.size()%2 == 0)  {
            ans = (v[(v.size()/2)-1]+v[(v.size()/2)]);
            return ans/2;
        }
        ans = v[v.size()/2];
        return ans/1;
       
    }
};
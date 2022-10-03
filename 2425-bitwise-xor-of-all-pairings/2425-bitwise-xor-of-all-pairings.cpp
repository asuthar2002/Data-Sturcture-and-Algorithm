#define v vector<int> 
class Solution {
public:
    int code1(v&nums1 , v&nums2)
    {
        vector<int> ans;
        int i=0, j=0; 
        while(i<nums1.size() and j<nums2.size())
        {
            ans.push_back(nums1[i++]^nums2[j++]);
        }
        if(nums1.size()>nums2.size())
        {
           while(i<nums1.size()) ans.push_back(nums1[i++]);
        }
        else while(j<nums2.size()) ans.push_back(nums2[j++]);
        int cnt = 0;
        for(int i=0; i<ans.size(); i++)
        {
            cnt = cnt^ans[i];
        }
        return cnt;
    }
    
    int code2(v&n1,v&n2)
    {
        int ans = 0;
        if(n1.size()%2){
            for(int i=0; i<n2.size(); i++){
                ans = ans^n2[i];
            }
        }
        if(n2.size()%2){
            for(int i=0; i<n1.size(); i++){
                ans^=n1[i];
            }
        }
        return ans;
    }
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        // return code1(nums1,nums2);
        
        return code2(nums1,nums2);
    }
};
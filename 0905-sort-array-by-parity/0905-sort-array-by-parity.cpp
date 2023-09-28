class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> arr1, arr2;
        for(auto it:nums) {
            if(it%2==0) arr1.push_back(it);
            else arr2.push_back(it);
        }
        for(auto it:arr2)arr1.push_back(it);
        return arr1;
    }
};
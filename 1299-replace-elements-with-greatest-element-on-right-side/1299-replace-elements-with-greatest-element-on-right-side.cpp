class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        int i=arr.size()-2;
        int element = arr[arr.size()-1];
        ans.push_back(-1);
        while(i>=0)
        {
            if(arr[i]>element)
            {
                ans.push_back(element);
                element = arr[i];
            }
            else ans.push_back(element);
            
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
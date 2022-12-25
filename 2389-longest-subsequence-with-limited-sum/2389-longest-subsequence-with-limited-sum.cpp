class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        sort(nums.begin(), nums.end());
        vector<int> psum;
        int sum = 0;
        for(int i=0; i<n;i++){
            sum+=nums[i];
            psum.push_back(sum);
        }
        // precios sum arrau is here psum;
        vector<int> ans(m, 0);
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(psum[j]<=queries[i]) ans[i] = j+1;
                else break;
            }
        }
        return ans;
    }
};
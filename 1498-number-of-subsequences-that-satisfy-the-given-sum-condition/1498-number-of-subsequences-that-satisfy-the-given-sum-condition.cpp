class Solution {
public:
    
     const int MOD = 1e9 + 7;
      int numSubseq(vector<int>& nums, int target) {
            sort(nums.begin(), nums.end());
            vector<int> pows(nums.size());
            pows[0] = 1;
            int subsequences = 0;
            int left = 0;
            int right = nums.size() - 1;

            for (int index = 1; index < nums.size(); index++) {
            pows[index] = pows[index - 1] * 2 % MOD;
            }

            while (left <= right) {
            if (nums[left] + nums[right] > target) {
            right--;
            } else {
            subsequences = (subsequences + pows[right - left++]) % MOD;
            }
            }

            return subsequences;
            }


};
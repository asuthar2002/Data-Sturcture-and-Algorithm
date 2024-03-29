class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i, j, n = nums.size(), wins;
			wins = n - k + 1;                        // # of windows
			vector<int> lft(n), rgt(n);            // to store above explained lft and rgt

			for (i = 0; i < n; i++)
			{
				lft[i] = nums[i];
				 // If it start of block, then that element is max so far in the block
				 // Else lft[i] is max so far in the block
				if (i % k !=0) 
					lft[i] = max(lft[i - 1], lft[i]);
			}

			rgt[n - 1] = nums[n - 1];
			for (i = n - 2; i >= 0; i--)
			{
				rgt[i] = nums[i];
				// same as for left, but now traversing from right
				if (i % k != (k - 1))
					rgt[i] = max(rgt[i], rgt[i + 1]);
			}

			vector<int> ans;

			for (i = 0; i < wins; i++)
				ans.push_back(max(rgt[i], lft[i + k - 1]));

			return ans;
    }
};
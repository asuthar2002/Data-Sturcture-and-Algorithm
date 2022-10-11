class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int secondSmallest = INT_MAX, smallest = INT_MAX;
        for (auto n: nums) {
            if (n > secondSmallest) return true;
            else if (n > smallest) {
                secondSmallest = n;
            }
            else if (n < smallest) smallest = n;
        }
        return false;
    }
};
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      map<int, int> m1, m2;
            for (auto x: arr) m1[x]++;
            for (auto it: m1) m2[it.second]++;        
            for (auto it: m2) if (it.second > 1) return false;
            return true;
    }
};
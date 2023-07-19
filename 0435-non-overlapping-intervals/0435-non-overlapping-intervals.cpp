class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());
        int cnt = 0;
        int m = intervals[0][1];
        
        for(int i=1; i<intervals.size(); i++)
        {
            if(intervals[i][0] < m)
            {
                cnt++;
                m = min(m, intervals[i][1]);
            }
            else{
                m = intervals[i][1];
            }
        }
        return cnt;
    }
};
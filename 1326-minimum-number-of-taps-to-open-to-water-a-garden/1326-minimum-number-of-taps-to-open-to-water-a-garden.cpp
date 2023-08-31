class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int mn_range_for_now = 0;
        int mx_range_for_now = 0;
        int open_taps = 0;
        while(mx_range_for_now < n){    // meaning, loop until whole garden is covered
            
            for(int i = 0;i < ranges.size();i++){
                if(i - ranges[i] <= mn_range_for_now  && i + ranges[i] > mx_range_for_now){
                    mx_range_for_now = i + ranges[i];
                }
            }
            if(mn_range_for_now == mx_range_for_now) return -1;
            mn_range_for_now = mx_range_for_now;
            open_taps++;
        }
        return open_taps;
    }
};
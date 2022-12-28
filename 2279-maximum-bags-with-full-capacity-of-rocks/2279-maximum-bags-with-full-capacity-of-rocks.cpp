class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        for(int i=0; i<capacity.size(); i++){
            capacity[i] -=rocks[i];
        }
        sort(capacity.begin(), capacity.end());
        int cnt = 0;
        for(auto it:capacity){
            if(additionalRocks>=it){
                additionalRocks-=it;
                cnt++;
            }
        }
        return cnt;
    }
};
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        if(k>n) return *max_element(arr.begin(), arr.end());
        int ans = arr[0];
        int cnt = 0;
        for(int i=1; i<n-1; i++){
            if(ans>arr[i]) {
                cnt++;
            }
            else {
                cnt = 1;
                ans  = arr[i];
            }
            if(cnt == k) return ans;
        }
        ans = *max_element(arr.begin(), arr.end());
        return ans;
        
    }
};
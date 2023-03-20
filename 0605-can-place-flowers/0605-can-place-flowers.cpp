class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
         int i = 0;
        int count =0;
        while (i < arr.size()) {
            if (arr[i] == 0 && (i == 0 || arr[i-1] == 0) && (i == arr.size()-1 || arr[i+1] == 0)) {
                arr[i] = 1;
                count++;
            }
            i++;
        }
        return count >= n;
    }
};
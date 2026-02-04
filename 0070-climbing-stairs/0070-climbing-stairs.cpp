class Solution {
public:
    int arr[46];
     Solution() {
        memset(arr, -1, sizeof(arr));  
    }
    int climbStairs(int n) {
        if (n < 0)
            return 0;
        if (n == 0)
            return 1;
        if (arr[n] != -1)
            return arr[n];
        return arr[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }
};
class Solution {
public:
    int countDigits(int num) {
        int ans = num;
        int cnt = 0;
        // vector<int> ans;
        while(num){
            int a = num%10;
            if(ans%a == 0) cnt++;
            num = num/10;
        }
        return cnt;
    }
};
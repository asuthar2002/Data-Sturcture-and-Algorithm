class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        int i=1;
        bool ans = false;
        while(i<=n)
        {
            long int a = 1;
            int x = i;
            while(x>=1)
            {
                a *= 4;
                x--;
            }
            // cout<<a<<" ";
                if(a == n) {
                    ans = true;
                    break;
                } 
                if(a>n) return false; 
            i++;
        }
        return ans;
    }
};
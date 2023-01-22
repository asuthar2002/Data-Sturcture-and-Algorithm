class Solution {
public:
    bool isReachable(int x, int y) {
        // return __builtin_popcount(gcd(targetX, targetY)) == 1;
        int g = __gcd(x, y);
        while(g % 2 == 0) g /= 2;
        return g == 1;
    }
};
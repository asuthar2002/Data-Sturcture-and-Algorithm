class Solution {
public:
    int addDigits(int num) {
        int sum = num;
        long long  a = 0 ;
        while(sum!=0){
            a = a+(sum%10);
            sum /=10;
        }
        return a > 9 ? addDigits(a) : a;
    }
};

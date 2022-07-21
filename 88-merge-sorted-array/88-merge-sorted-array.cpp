class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
         // two pointer approach 
        int p1 = m-1,
            p2 = n-1,
            i = m+n-1; // here we are optimizing our space 
        while(p2>=0)
        {
            if(p1>=0 && num1[p1]>num2[p2])
            {
                num1[i--] = num1[p1--];
            }
            else
            {
                num1[i--] = num2[p2--];
            }
        }
    }
};
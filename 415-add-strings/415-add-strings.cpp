class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1 , j = num2.size()-1;
        int carry = 0;
        string ans = "";
        while(i>=0 || j>=0)
        {
            int sum = carry;
            if(i>=0)
            {
                int a = num1[i]-'0';
                sum += a;
                i--;
            }
            if(j>=0)
            {
                int a = num2[j]-'0';
                sum+= a;
                j--;
            }
            int b = (sum%10) + '0';
            ans += b;
            carry = sum/10;
            
        }
         if(carry == 1)
            ans += to_string(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
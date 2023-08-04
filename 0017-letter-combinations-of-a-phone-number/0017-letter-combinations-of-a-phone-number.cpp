class Solution {
public:
    void code(string digits, string output, int idx,string mapping[], vector<string>&ans)
    {
        if(idx>=digits.length())
        {
            ans.push_back(output);
            return ;
        }
        int number = digits[idx] - '0';
        string value = mapping[number];
        for(int i=0; i<value.length();  i++)
        {
            output.push_back(value[i]);
            code(digits,output,idx+1,mapping,ans);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0) return ans;
        string output = "";
        int idx = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi","jkl", "mno","pqrs","tuv","wxyz"};
        code(digits,output,idx,mapping,ans);
        return ans;
    }
};
class Solution {
public:
//     void code(vector<vector<int>> &ans, int index, vector<int>&temp, int k, int n)
//     {
//         if(n<0 or temp.size()<0)
//         {
//             return ;
//         }
//         if(n==0 and temp.size()==k)
//         {
//             ans.push_back(temp);
//             return ;
//         }
//         for(int i=index; i<=9; i++)
//         {
//             temp.push_back(i);
//             code(ans,i+1,temp,k, n-i);
//             temp.pop_back();
//         }
        
//     }
//     vector<vector<int>> combinationSum3(int k, int n) {
//         vector<vector<int>> ans;
//         vector<int> temp ;
//         code(ans, 1, temp, k , n);
//         return ans;
    
        void code(vector<int> &c, vector<vector<int>>&ans, vector<int> &res, int t, int i,int k){
      
        if(t == 0 && res.size() == k) {
            ans.push_back(res);
            return ;
        }
        if(res.size()>k) return ;
        if(i==c.size() || t-c[i]<0) return ;
        
        res.push_back(c[i]);
        code(c,ans,res,t-c[i],i+1,k);
        res.pop_back();
            
        code(c,ans,res,t,i+1,k);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> c;
        for(int i=1; i<=9; i++)
        {
            c.push_back(i);
        }
        vector<vector<int>> ans;
        vector<int> res;
        code(c,ans,res,n,0,k);
        return ans;
    }
};
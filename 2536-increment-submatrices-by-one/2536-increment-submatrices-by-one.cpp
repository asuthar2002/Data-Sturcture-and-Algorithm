class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> ans(n,vector<int> (n,0));
        for(auto it: queries){
            int rs  = it[0];
            int cs = it[1];
            int re = it[2];
            int ce = it[3];
           
            ans[rs][cs] +=1;
            if(re+1<n and ce+1<n)ans[re+1][ce+1] +=1;
            if(re+1< n) ans[re+1][cs]-=1;
            if(ce+1<n) ans[rs][ce+1]-=1;
            
        }
      
        for(int i=0; i<n ;i++){
            for(int j=1; j<n; j++){
                ans[i][j]+=ans[i][j-1];
            }
        }
        
        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                ans[i][j]+=ans[i-1][j];
            }
        }
        
        return ans;
    }
};
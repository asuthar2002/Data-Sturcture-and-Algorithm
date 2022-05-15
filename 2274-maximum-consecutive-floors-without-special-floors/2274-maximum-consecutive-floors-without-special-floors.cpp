class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
          sort(special.begin(),special.end());
        
        int op1=special[0]-bottom;
        int mx=op1;
        int i;
      
        int n=special.size();
        for(i=0;i<n-1;i++)
        {
            mx=max(mx,special[i+1]-special[i]-1);

        }
        mx=max(mx,top-special[n-1]);
    
        return mx;
    
    }
};
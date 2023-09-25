class Solution {
public:
    long long int code(vector<int> maxHeights, int i){
        int j = i+1;
        int imax = maxHeights[i];
        int jmax = imax;
        i -=1;
        // cout<<i<<" ";
        while(i>=0 ){
            if(imax>=maxHeights[i]){imax = maxHeights[i];}
            else  maxHeights[i] = imax;
            i--;
        }
        while(j<maxHeights.size()){
            if(jmax>=maxHeights[j]) jmax = maxHeights[j];
            else maxHeights[j] = jmax;
            j++;
        }
        long long int ans = 0;
        for(auto it:maxHeights) ans+=it;
        return ans;
    }
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        
        long long int ans = INT_MIN;
        for(int i=0; i<maxHeights.size(); i++){
            ans = max(ans, code(maxHeights,i));
            // cout<<endl;
        }
        return ans;
    }
};
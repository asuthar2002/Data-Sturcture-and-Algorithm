class Solution {
public:
    int minDeletions(string s) {
        int arr[26] = {0};
        for(int i=0; i<s.length(); i++)arr[s[i]-'a']++;
        sort(arr,arr+26);
        int del = 0;
        int prev = 0;
        for(int i=24; i>=0; i--)
        {
            if(arr[i] == 0) break;
             if(arr[i] >= arr[i+1]){
                int prev = arr[i];
                arr[i] = max(0, arr[i+1] -1);
                del += prev - arr[i]; 
            }
            
        }
        return del;
    }
};
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // solution 2;
        
        int n = arr.size()-1;
        int i = n-1;
        int element = arr[n];
        arr[n] = -1;
        while(i>=0)
        {
            int nxt ;
            if(arr[i]>element)
            {
                nxt = arr[i];
                arr[i] = element;
                element = nxt;
            }
            else {
                arr[i] = element;
            }
            i--;
        }
        return arr;
        
    }
};
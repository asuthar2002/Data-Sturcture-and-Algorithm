class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
//         vector<int>ans;
//         int i=arr.size()-2;
//         int element = arr[arr.size()-1];
//         ans.push_back(-1);
//         while(i>=0)
//         {
//             if(arr[i]>element)
//             {
//                 ans.push_back(element);
//                 element = arr[i];
//             }
//             else ans.push_back(element);
            
//             i--;
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
        
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
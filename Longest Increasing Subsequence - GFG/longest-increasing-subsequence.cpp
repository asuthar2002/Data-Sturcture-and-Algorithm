//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
     int f(int arr[], int n)
    {
        
        vector<vector<int>> dp(n+1, vector<int> (n+1, 0));
        for(int i=n-1; i>=0; i--)
        {
            for(int j=i-1; j>=-1; j--)
            {
                int take = 0;
                if(j==-1 || arr[i]>arr[j])
                    take = 1+dp[i+1][i+1];
                int ntake = dp[i+1][j+1];
                dp[i][j+1] = max(take , ntake);
            }
        }
        return dp[0][0];
    }
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        return f(a,n);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

int a=0;
vector<int> isprime(10000,1);
class Solution{   
  public:
 
  void sieve()
  {
    for(int i=2;i*i<=9999;i++)
    {
        for(int j=i+i;j<=9999;j+=i)
        {
            isprime[j]=0;
        }
    }
  }//done
 //bfs implementation
 int func(int n1,int n2)
 {  
    vector<int>vis(10000,-1);
    queue<int>q;
    q.push(n1);
    vis[n1]=0;
    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        //cout<<"t="<<t<<endl;
        string s=to_string(t);//since int cant be modified by indexing
        for(int i=0;i<4;i++)
        {char ch=s[i];
            //1st character cant be 0
            int k=0;
            if(i==0)k=1;
            for(int j=k;j<10;j++)
            {
                s[i]=j+'0';  
                int x=stoi(s);
                if(isprime[x]==1 && vis[x]==-1)
                {
                   vis[x]=1+vis[t];
                   q.push(x);
                }
            }s[i]=ch;
        }
    }
    return vis[n2];   
 }
    int shortestPath(int Num1,int Num2)
    {   
        if(a==0)
        {
            sieve();
            a=1;
        }
        int ans = func(Num1,Num2);
        return ans;
        // Complete this function using prime vector
    }
};


//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {
        int Num1,Num2;
        cin>>Num1>>Num2;
        int answer=obj.shortestPath(Num1,Num2);
        cout<<answer<<endl;
    }
}
// } Driver Code Ends
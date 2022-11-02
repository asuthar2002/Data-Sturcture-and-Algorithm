class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
         unordered_set<string> d;
        for(auto it: bank) d.insert(it);
        if(d.find(end)==d.end()) return -1;
        unordered_set<string> vis;
        vector<char> avi = {'A', 'C', 'G', 'T'};
        queue<string> q;
        int ans = 0;
        q.push(start);
        vis.insert(start);
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                string curr = q.front(); q.pop();
                if(curr == end) return ans;
                for(int i=0; i<8; i++)
                {
                    char c = curr[i];
                    for(int j=0; j<4; j++)
                    {
                        curr[i] = avi[j];
                        if(d.find(curr)!= d.end())
                        {
                            if(vis.find(curr) == vis.end())
                            {
                                q.push(curr);
                                vis.insert(curr);
                            }
                        }
                    }
                    curr[i] = c;
                }
            }
            ans++;
        }
        return -1;
    }
};
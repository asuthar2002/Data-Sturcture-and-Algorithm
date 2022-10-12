class Solution {
public:
    int largestPerimeter(vector<int>& n) {
        sort(n.begin(),n.end());
        for(int i=n.size()-1; i>=2; i--)
        {
            int a = n[i];
            int b = n[i-1];
            int c = n[i-2];
            if(a+b>c && a+c>b && b+c>a) return a+b+c;
        }
        return 0;
    }
};
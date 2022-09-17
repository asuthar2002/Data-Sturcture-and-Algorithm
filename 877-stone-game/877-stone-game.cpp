class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int a = 0;
        int b = 0;
        int i=0, j=piles.size()-1;
        while(i<j)
        {
            if(piles[i]>piles[j])
            {
                a+=piles[i];
                i++;
                b+=piles[j];
                j--;
            }
            else{
                a+=piles[j--];
                b+=piles[i++];
            }
        }
        if(a>b) return true;
        return false;
    }
};
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0; int j=people.size()-1;int cnt = 0;
        sort(people.begin(), people.end());
        while(i<=j){
            if(i==j){
                cnt++;i++;j--;
            }
            else if(people[i]+people[j]>limit){
                cnt++;
                j--;
            }
            else if(people[i]+people[j]==limit || people[i]+people[j]<limit){
                i++;j--;cnt++;
            }
        }
        return cnt;
    }
};
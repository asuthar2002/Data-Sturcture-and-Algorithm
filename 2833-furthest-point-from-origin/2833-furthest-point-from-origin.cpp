class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        for(auto it: moves){
            if(it == 'L')left++;
            if(it == 'R') right++;
        }
        bool turn ;
        int cnt = 0;
        if(left>right) turn = false;
        else turn = true;
        for(int i=0; i<moves.length(); i++){
            
            if((turn == false and moves[i] == '_') || moves[i] == 'L') {
                // turn = false;
                cnt--;
            }
            else if((turn and moves[i] == '_') || moves[i] == 'R'){
                // turn = true;
                cnt++;
            }
        }
        return abs(cnt);
    }
};
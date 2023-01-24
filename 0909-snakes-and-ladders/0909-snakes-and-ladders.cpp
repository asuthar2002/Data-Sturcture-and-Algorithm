class Solution {
public:
    tuple<int, int> coord(int n, int c) {
        int row = n - 1 - ((c - 1) / n);
        int row_direction = (((n - 1) % 2) == (row % 2));
        int column = c - 1 - ((n - 1 - row) * n);
        column = row_direction ? column : n - column - 1;
        return {row, column};
    }
    
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<int> distances(n * n + 1, -1);
        int target = n * n;
        auto comp = [](auto& t1, auto& t2) -> bool { 
            return get<0>(t1) == get<0>(t2) ? get<1>(t1) < get<1>(t2) : get<0>(t1) < get<0>(t2); 
        };
        priority_queue<tuple<int, int>, vector<tuple<int, int>>, decltype(comp)> q(comp);
        q.push({1, 0});
        int min_seen = numeric_limits<int>::max();
        while(!q.empty()) {
            int x, distance;
            tie(x, distance) = q.top();
            q.pop();
            if(distances[x] == -1 || distances[x] > distance) {
                distances[x] = distance;
            } else {
                continue;
            }
            int xx, yy;
            tie(xx, yy) = coord(n, x);
            if(board[xx][yy] != -1) {
                x = board[xx][yy];
            }
            if(x == target) {
                min_seen = min(min_seen, distance);
                continue;
            }
                        
            for(int i = 1; i <= 6; i++) {
                int neighbor = x + i;
                if(neighbor <= target) {
                    q.push({neighbor, distance + 1});
                } 
            }
        }
        return min_seen == numeric_limits<int>::max() ? -1 : min_seen;
    }
};
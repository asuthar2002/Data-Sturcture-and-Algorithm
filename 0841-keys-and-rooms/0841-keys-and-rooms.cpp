class Solution {
public:
    void code(vector<vector<int>>&graph,  int s, vector<bool> &visted)
    {
        visted[s] = true;
        for(int i=0; i<graph[s].size(); i++)
        {
            if(!visted[graph[s][i]]) code(graph, graph[s][i], visted);
        }
        
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visted(rooms.size()+1, 0);
        code(rooms, 0, visted);
        for(int i=0 ;i<rooms.size(); i++){
            if(!visted[i]) return false;
        }
        return true;
        
    }
};
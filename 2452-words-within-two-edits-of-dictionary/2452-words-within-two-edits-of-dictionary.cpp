class Solution {
public:
    int code(string &a,string &b){
        int k = 0;
        for(int i=0; i<a.size(); i++)if(a[i]!=b[i]) k++;
        return  k;
    }
    vector<string> twoEditWords(vector<string>& q, vector<string>& d) {
        vector<string> ans;
        for(int i=0 ; i<q.size(); i++){
            string a = q[i];
            for(int j=0; j<d.size(); j++){
                string b = d[j];
                int k = code(a,b);
                if(k<=2) {ans.push_back(a); break;}
            }
        }
        return ans;
    }
};
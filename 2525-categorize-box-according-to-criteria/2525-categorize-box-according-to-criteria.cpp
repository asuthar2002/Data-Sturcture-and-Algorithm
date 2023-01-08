class Solution {
public:
    long long  m = 1e9;
    int b = 1e4;
    string categorizeBox(int length, int width, int height, int mass) {
        unsigned long long v = 1ll*length*width*height;
        cout<<v;
        bool d= false;
        if((length>=b || width >=b || height>=b))  d = true;
        if((v>=m || d ) and mass>=100)return "Both";
        else if(v>=m || (length>=b || width >=b || height>=b)) return "Bulky";
        else if(v<m and mass<100) return "Neither";
        else return "Heavy";
    }
};
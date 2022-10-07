class MyCalendarThree {
public:
    MyCalendarThree() {
        
    }
    map<int,int> mp;
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int count = 0;
        int ans = 0;
        for(auto i : mp)
        {
            count += i.second;
            ans = max(ans, count);
        }
        return ans; 
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */

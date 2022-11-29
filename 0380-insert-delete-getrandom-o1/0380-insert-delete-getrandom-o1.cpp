class RandomizedSet 
{
private:
    unordered_map<int, int> m;
    vector<unordered_map<int, int> :: iterator> mIterator;
public:    
    
    RandomizedSet()
    {
        // for rand() to ensure different set of random
        // values are generated in every function call.
        srand(time(0));
    }

    bool insert(int val) 
    {
        if(m.find(val) != m.end())
            return false;
        else
        {
            m[val] = mIterator.size();
            mIterator.push_back(m.find(val));
            return true;
        }
    }
    
    bool remove(int val) 
    {
        if(m.find(val) == m.end())
            return false;
        else
        {
            if(m.size() > 1)
            {
                int valIndex = m[val];
                auto it = mIterator[mIterator.size() - 1];
                
                // update index for last iterator
                it->second = valIndex;
                swap(mIterator[valIndex], mIterator[mIterator.size() - 1]);        
            }
            mIterator.pop_back();
            m.erase(val);
            return true;
        }
    }
    
    int getRandom() 
    {
        int randomIndex = rand()%(mIterator.size());
        return mIterator[randomIndex]->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
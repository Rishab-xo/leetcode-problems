class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>um;
        for(int i:arr)
        {
            um[i]++;
        }
        unordered_set<int>us;
        for(auto i:um)
        {
            if(us.find(i.second)!=us.end())
            {
                return false;
            }
            us.insert(i.second);
        }
        return true;
    }
};
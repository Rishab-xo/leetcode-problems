class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int>um;
        for(int i:magazine)
        {
            um[i]++;
        }
        for(auto i:ransomNote)
        {
            if(um[i]==0)
            {
                return false;
            }
            um[i]--;
        }
        return true;
    }
};
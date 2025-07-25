class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>um;
        for(int i:nums)
        {
            um[i]++;
        }
        for(auto i:um)
        {
            if(i.second>(nums.size())/2)
            {
                return i.first;
            }
        }
        return -1;
    }
};
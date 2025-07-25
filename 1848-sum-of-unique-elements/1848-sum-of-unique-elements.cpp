class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>um;
        int sum=0;
        for(int i:nums)
        {
            um[i]++;
        }
        for(auto it:um)
        {
            if(it.second==1)
            {
                sum+=it.first;
            }
        }
        // for(auto& const[val,key]:um){
        //     if(key==1){
        //         sum+=val;
        //     }
        // }
        return sum;
    }
};
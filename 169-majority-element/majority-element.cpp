#include <unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++)
            mpp[nums[i]]++;
        int max=0,val=0;
        for(auto it:mpp)
        {
            if(max<it.second)
            {
                max=it.second;
                val=it.first;
            }
            if(2*max>nums.size())
                break;
        }

        return val;
        
    }
};
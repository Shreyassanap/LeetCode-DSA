class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int max=-1,min=100;

        vector<int>sol;

        for(int i=0;i<nums.size();i++)
        {
            if(min>nums[i])
                min=nums[i];

            if(max<nums[i])
                max=nums[i];
            
        }

       unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++)
            mpp[nums[i]]++;


        for(int i=min;i<=max;i++)
        {
            if(mpp.find(i)==mpp.end())
                sol.push_back(i);
        }


        return sol;

    }
};
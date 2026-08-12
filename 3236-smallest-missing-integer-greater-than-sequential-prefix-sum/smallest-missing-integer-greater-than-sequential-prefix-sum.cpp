class Solution {
public:
    int missingInteger(vector<int>& nums) {
        

        if(nums.size()==1)
            return nums[0]+1;

        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++)
            mpp[nums[i]]++;

        int sum=nums[0];
        int i=1;
        while(i!=nums.size() && nums[i]-1==nums[i-1])
        {
            sum=sum+nums[i];
            i++;
        }

        while(1)
        {
            if(mpp.find(sum)!=mpp.end())
                sum++;
            else
                return sum;
        }

        return 0;

        
        
    }
};
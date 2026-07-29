class Solution {
public:
    bool canJump(vector<int>& nums) {

        if(nums.size()==1)
            return true;
        int count=nums[0];
        int i=0;
        while(count!=0)
        {
            count--;
            i++;
            if(i==nums.size()-1)
                return true;
            if(count<nums[i])
                count=nums[i];
            
        }

        return false;
        
    }
};
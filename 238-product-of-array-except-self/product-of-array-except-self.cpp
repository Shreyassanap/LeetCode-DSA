class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int>sol(nums.size(),1);
    
    for(int i=nums.size()-2;i>=0;i--)
    {
        sol[i]=sol[i+1]*nums[i+1];
    }

    int prefix=1;
    for(int i=0;i<nums.size();i++)
    {
        sol[i]=sol[i]*prefix;
        prefix=prefix*nums[i];
    }

    return sol;


    
        
    }
};
class Solution {

int sol(int n,vector<int>& nums,vector<int>&dp)
{
    if(n==0)
        return nums[0];
    if(n<0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    int picked=nums[n]+sol(n-2,nums,dp);
    int not_picked=0+sol(n-1,nums,dp);

    return dp[n]=max(picked,not_picked);
}
public:
    int rob(vector<int>& nums) {

        vector<int>dp(nums.size(),-1);

        return sol(nums.size()-1,nums,dp);

        


        
    }
};
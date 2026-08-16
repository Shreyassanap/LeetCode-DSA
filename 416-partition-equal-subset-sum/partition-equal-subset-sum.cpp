class Solution {

bool foo(int n,int target,vector<int>&nums,vector<vector<int>>&dp)
{
    if(target==0)
        return true;
    
    if(n==0)
        return dp[n][target]=(nums[0]==target);
    
    if(dp[n][target]!=-1)
        return dp[n][target];
    
    bool not_taken=foo(n-1,target,nums,dp);
    bool take=false;

    if(nums[n]<=target)
        take=foo(n-1,target-nums[n],nums,dp);

    return dp[n][target]=take|not_taken;
}
public:
    bool canPartition(vector<int>& nums) {

        int target=0;

        for(int i=0;i<nums.size();i++)
            target=target+nums[i];
        
        if(target%2!=0)
            return false;

        vector<vector<int>>dp(nums.size(),vector<int>(target+1,-1));
        
        target=target/2;

               

        return foo(nums.size()-1,target,nums,dp);


        
    }
};
class Solution {

    bool foo(vector<int>& nums, vector<int>& dp, int i)
    {
        if(i >= nums.size() - 1)
            return true;

        if(dp[i] != -1)
            return dp[i];

        for(int k = 1; k <= nums[i]; k++)
        {
            if(foo(nums, dp, i + k))
            {
                dp[i] = 1;
                return true;
            }
        }

        dp[i] = 0;
        return false;
    }

public:
    bool canJump(vector<int>& nums)
    {
        vector<int> dp(nums.size(), -1);

        return foo(nums, dp, 0);
    }
};
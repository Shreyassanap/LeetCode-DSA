class Solution {

    int sol(vector<int>& nums, int n, vector<int>& dp)
    {
        if (n == 0)
            return nums[0];

        if (n < 0)
            return 0;

        if (dp[n] != -1)
            return dp[n];

        int pick = nums[n] + sol(nums, n - 2, dp);
        int notPick = sol(nums, n - 1, dp);

        return dp[n] = max(pick, notPick);
    }

public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 1)
            return nums[0];

        vector<int> first(nums.begin(), nums.end() - 1);
        vector<int> second(nums.begin() + 1, nums.end());

        vector<int> dp1(first.size(), -1);
        vector<int> dp2(second.size(), -1);

        int ans1 = sol(first, first.size() - 1, dp1);
        int ans2 = sol(second, second.size() - 1, dp2);

        return max(ans1, ans2);
    }
};
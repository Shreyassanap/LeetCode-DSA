class Solution {
    int foo(vector<int>& cost, int n, vector<int>& dp)
    {
        if (n == 0)
            return cost[0];
        if (n == 1)
            return cost[1];

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = cost[n] + min(foo(cost, n - 1, dp),
                                     foo(cost, n - 2, dp));
    }

public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);

        return min(foo(cost, n - 1, dp),
                   foo(cost, n - 2, dp));
    }
};
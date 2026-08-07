class Solution {
int foo(int m,int n,vector<vector<int>>&grid,vector<vector<int>>&dp)
{
    if(m<0 || n<0)
        return INT_MAX;
    if(dp[m][n]!=-1)
        return dp[m][n];
    if(m==0 && n==0)
        return dp[m][n]=grid[m][n];

    int right=foo(m-1,n,grid,dp);
    int left=foo(m,n-1,grid,dp);

    return dp[m][n]=grid[m][n]+min(right,left);
}

public:
    int minPathSum(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>>dp(m,vector(n,-1));

       foo(m-1,n-1,grid,dp);

       return dp[m-1][n-1];


        
    }
};
class Solution {

int foo(int m,int n,vector<vector<int>>&dp)
{
    if(m==0 && n==0)
        return 1;
    
    if(m<0 || n<0)
        return 0;
    
    if(dp[m][n]!=-1)
        return dp[m][n];

    return dp[m][n]=foo(m-1,n,dp) + foo(m,n-1,dp);
}
public:
    int uniquePaths(int m, int n) {

    vector<vector<int>>dp(m,vector<int>(n,-1));




    return foo(m-1,n-1,dp);
        
    }
};
class Solution {

int foo(int m,int n,vector<vector<int>>& ob,vector<vector<int>>&dp)
{

    if(m<0 || n<0)
        return 0;

    if(dp[m][n]!=-1)
        return dp[m][n];

    if(ob[m][n]==1)
        return 0;
    
    if(m==0 && n==0)
        return 1;
    
    return dp[m][n]=foo(m-1,n,ob,dp)+foo(m,n-1,ob,dp);


}

public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {


        int m = obstacleGrid.size();
        int n= obstacleGrid[0].size();

        cout<<m;
        cout<<n;

        if(m==1 && n==1){
            if(obstacleGrid[0][0]==1)
                return 0;
            return 1;
        }

        vector<vector<int>>dp(m,vector<int>(n,-1));

        foo(m-1,n-1,obstacleGrid,dp);

        int sol= dp[m-1][n-1];

        if(sol<=0)
            return 0;
        return sol; 
        
    }
};
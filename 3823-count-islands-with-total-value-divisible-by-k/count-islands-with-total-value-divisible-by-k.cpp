class Solution {

    void bfs(vector<vector<int>>&vis,vector<vector<int>>&grid,int i,int j,int &count,int k)
    {
        long long word=0;
        queue<pair<int,int>>q;
        vis[i][j]=1;
        pair<int,int>p;
        p.first=i;
        p.second=j;

    
        q.push(p);

        while(!q.empty())
        {
            int n=q.front().first;
            int m=q.front().second;

            word=word+grid[n][m];

            q.pop();

            if(n-1>=0 && grid[n-1][m]>0 && vis[n-1][m]==0)
            {
                vis[n-1][m]=1;
                pair<int,int>pq;
                pq.first=n-1;
                pq.second=m;
                q.push(pq);
            }

            if(m+1<grid[0].size() && grid[n][m+1]>0 && vis[n][m+1]==0)
            {
                vis[n][m+1]=1;
                pair<int,int>e;
                e.first=n;
                e.second=m+1;
                q.push(e);
            }

            if(n+1<grid.size() && grid[n+1][m]>0 && vis[n+1][m]==0)
            {
                vis[n+1][m]=1;
                pair<int,int>r;
                r.first=n+1;
                r.second=m;
                q.push(r);
            }

            if(m-1>=0 && grid[n][m-1]>0 && vis[n][m-1]==0)
            {
                vis[n][m-1]=1;
                pair<int,int>t;
                t.first=n;
                t.second=m-1;
                q.push(t);
            }
            
        }

        if(word%k==0)
            count++;
    }

public:
    int countIslands(vector<vector<int>>& grid, int k) {

        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));

        int count=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]>0){
                    bfs(vis,grid,i,j,count,k);
                }
            }
        }

        return count;
        
    }
};
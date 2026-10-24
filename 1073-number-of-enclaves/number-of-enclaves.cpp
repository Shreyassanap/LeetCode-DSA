class Solution {
    void bfs(vector<vector<int>>& vis, vector<vector<int>>& grid, int i, int j)
    {
        queue<pair<int,int>> q;
        q.push({i, j});
        vis[i][j] = 1;

        while(!q.empty())
        {
            pair<int,int> temp = q.front();
            q.pop();

            int n = temp.first;
            int m = temp.second;

            if(n-1 >= 0 && vis[n-1][m] == 0 && grid[n-1][m] == 1)
            {
                q.push({n-1, m});
                vis[n-1][m] = 1;
            }

            if(m+1 < grid[0].size() && vis[n][m+1] == 0 && grid[n][m+1] == 1)
            {
                q.push({n, m+1});
                vis[n][m+1] = 1;
            }

            if(n+1 < grid.size() && vis[n+1][m] == 0 && grid[n+1][m] == 1)
            {
                q.push({n+1, m});
                vis[n+1][m] = 1;
            }

            if(m-1 >= 0 && vis[n][m-1] == 0 && grid[n][m-1] == 1)
            {
                q.push({n, m-1});
                vis[n][m-1] = 1;
            }
        }
    }

public:
    int numEnclaves(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int j = 0; j < m; j++)
        {
            if(grid[0][j] == 1 && vis[0][j] == 0)
                bfs(vis, grid, 0, j);

            if(grid[n-1][j] == 1 && vis[n-1][j] == 0)
                bfs(vis, grid, n-1, j);
        }

        for(int i = 0; i < n; i++)
        {
            if(grid[i][0] == 1 && vis[i][0] == 0)
                bfs(vis, grid, i, 0);

            if(grid[i][m-1] == 1 && vis[i][m-1] == 0)
                bfs(vis, grid, i, m-1);
        }

        int count = 0;

        for(int i = 1; i < n-1; i++)
        {
            for(int j = 1; j < m-1; j++)
            {
                if(grid[i][j] == 1 && vis[i][j] == 0)
                    count++;
            }
        }

        return count;
    }
};
class Solution {
    void bfs(vector<vector<int>>& vis, vector<vector<char>>& grid, int n, int m)
    {
        queue<pair<int,int>> q;
        q.push({n, m});
        vis[n][m] = 1;

        while(!q.empty())
        {
            pair<int,int> temp = q.front();
            q.pop();

            n = temp.first;
            m = temp.second;

            if(n + 1 < grid.size() && grid[n+1][m] == '1' && vis[n+1][m] == 0)
            {
                vis[n+1][m] = 1;
                q.push({n+1, m});
            }

            if(m + 1 < grid[0].size() && grid[n][m+1] == '1' && vis[n][m+1] == 0)
            {
                vis[n][m+1] = 1;
                q.push({n, m+1});
            }

            if(n - 1 >= 0 && grid[n-1][m] == '1' && vis[n-1][m] == 0)
            {
                vis[n-1][m] = 1;
                q.push({n-1, m});
            }

            if(m - 1 >= 0 && grid[n][m-1] == '1' && vis[n][m-1] == 0)
            {
                vis[n][m-1] = 1;
                q.push({n, m-1});
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid)
    {
        if(grid.empty()) return 0;

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == '1' && vis[i][j] == 0)
                {
                    bfs(vis, grid, i, j);
                    count++;
                }
            }
        }

        return count;
    }
};
class Solution {
    void bfs(vector<vector<char>>& grid, int n, int m)
    {
        queue<pair<int,int>> q;
        q.push({n, m});
        grid[n][m] = '0';

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!q.empty())
        {
            auto [r, c] = q.front();
            q.pop();

            for(int k = 0; k < 4; k++)
            {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr >= 0 && nr < grid.size() &&
                   nc >= 0 && nc < grid[0].size() &&
                   grid[nr][nc] == '1')
                {
                    grid[nr][nc] = '0';
                    q.push({nr, nc});
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid)
    {
        if(grid.empty()) return 0;

        int n = grid.size(), m = grid[0].size();
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == '1')
                {
                    bfs(grid, i, j);
                    count++;
                }
            }
        }

        return count;
    }
};
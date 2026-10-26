
class Solution {
    void bfs(vector<vector<int>>& vis, vector<vector<int>>& grid,
             int i, int j, int& count, int k) {
        int n = grid.size(), m = grid[0].size();
        long long sum = 0;

        queue<pair<int, int>> q;
        q.push({i, j});
        vis[i][j] = 1;

        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            sum += grid[x][y];

            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
                    grid[nx][ny] > 0 && !vis[nx][ny]) {
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }

        if (sum % k == 0)
            count++;
    }

public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] > 0 && !vis[i][j])
                    bfs(vis, grid, i, j, count, k);
            }
        }

        return count;
    }
};

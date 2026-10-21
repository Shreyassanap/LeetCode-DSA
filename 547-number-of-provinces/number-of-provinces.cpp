class Solution {
    void dfs(vector<int> adj[], int i, vector<int>& vis)
    {
        vis[i] = 1;

        for (int x = 0; x < adj[i].size(); x++)
        {
            int node = adj[i][x];

            if (vis[node] == 0)
                dfs(adj, node, vis);
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> adj[n + 1];

        vector<int> vis(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && isConnected[i][j] == 1)
                {
                    adj[i + 1].push_back(j + 1);
                }
            }
        }

        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                count++;
                dfs(adj, i, vis);
            }
        }

        return count;
    }
};
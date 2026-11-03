class Solution {

    bool dfs(vector<int>& vis, int i, vector<vector<int>>& adj, vector<int>& rep)
    {
        vis[i] = 1;
        rep[i] = 1;

        for(auto x : adj[i])
        {
            if(vis[x] == -1)
            {
                if(!dfs(vis, x, adj, rep))
                    return false;
            }
            else if(rep[x] == 1)
            {
                return false;
            }
        }

        rep[i] = -1;

        return true;
    }

public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int n = numCourses;

        vector<vector<int>> adj(n);

        int m = prerequisites.size();

        for(int i = 0; i < m; i++)
        {
            int num = prerequisites[i][0];
            int num2 = prerequisites[i][1];

            adj[num2].push_back(num);
        }

        vector<int> vis(n, -1);
        vector<int> rep(n, -1);

        for(int i = 0; i < n; i++)
        {
            if(vis[i] == -1)
            {
                if(!dfs(vis, i, adj, rep))
                    return false;
            }
        }

        return true;
    }
};
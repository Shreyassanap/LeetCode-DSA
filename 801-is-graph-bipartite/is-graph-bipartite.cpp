
class Solution {
    bool dfs(int flag, int n, vector<vector<int>>& graph, vector<int>& vis)
    {
        vis[n] = flag;

        if(flag == 0)
            flag = 1;
        else
            flag = 0;

        for(auto x : graph[n])
        {
            if(vis[x] == -1)
            {
                if(!dfs(flag, x, graph, vis))
                    return false;
            }
            else
            {
                if(vis[n] == vis[x])
                    return false;
            }
        }

        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();
        vector<int> vis(n, -1);

        for(int i = 0; i < n; i++)
        {
            if(vis[i] == -1)
            {
                if(!dfs(0, i, graph, vis))
                    return false;
            }
        }

        return true;
    }
};

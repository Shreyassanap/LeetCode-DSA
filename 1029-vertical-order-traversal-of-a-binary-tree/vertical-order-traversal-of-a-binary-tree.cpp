class Solution {
    void foo(TreeNode* root, map<int, vector<pair<int,int>>>& mpp, int x, int y)
    {
        if(root == NULL)
            return;

        foo(root->left, mpp, x - 1, y + 1);

        pair<int,int> p;
        p.first = y;
        p.second = root->val;

        mpp[x].push_back(p);

        foo(root->right, mpp, x + 1, y + 1);
    }

public:
    vector<vector<int>> verticalTraversal(TreeNode* root)
    {
        map<int, vector<pair<int,int>>> mpp;

        foo(root, mpp, 0, 0);

        vector<vector<int>> ans;

        for(auto &it : mpp)
        {
            sort(it.second.begin(), it.second.end());

            vector<int> temp;

            for(auto &p : it.second)
            {
                temp.push_back(p.second);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
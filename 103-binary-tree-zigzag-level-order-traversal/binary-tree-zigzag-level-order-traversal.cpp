class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> sol;

        if (root == NULL)
            return sol;

        queue<TreeNode*> q;
        int flag = 0;

        q.push(root);

        while (!q.empty())
        {
            int n = q.size();
            vector<int> temp;

            for (int i = 0; i < n; i++)
            {
                TreeNode* node = q.front();
                q.pop();

                int num = node->val;

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);

                if (flag % 2 == 0)
                {
                    temp.push_back(num);
                }
                else
                {
                    temp.insert(temp.begin(), num);
                }
            }

            flag++;
            sol.push_back(temp);
        }

        return sol;
    }
};
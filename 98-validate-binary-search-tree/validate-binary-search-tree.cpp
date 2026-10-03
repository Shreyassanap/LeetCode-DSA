class Solution {
    bool foo(TreeNode* root, long long low, long long high)
    {
        if(root == NULL)
            return true;

        if(root->val <= low || root->val >= high)
            return false;

        bool left = foo(root->left, low, root->val);
        bool right = foo(root->right, root->val, high);

        return left && right;
    }

public:
    bool isValidBST(TreeNode* root)
    {
        return foo(root, LLONG_MIN, LLONG_MAX);
    }
};
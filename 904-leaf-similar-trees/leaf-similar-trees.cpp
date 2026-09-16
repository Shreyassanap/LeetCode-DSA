/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

    void foo(TreeNode* root,vector<int>&sol)
    {
        if(root==NULL)
            return;
        if(root->left==root->right)
        {
            sol.push_back(root->val);
            return;
        }

        foo(root->left,sol);
        foo(root->right,sol);

    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        foo(root1,v1);
        foo(root2,v2);

        if(v1==v2)
            return true;
        return false;
        
    }
};
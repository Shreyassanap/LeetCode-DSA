/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {

    void foo(TreeNode* root,TreeNode*p,TreeNode*q,TreeNode*&sol)
    {
        if(root==p)
        {
            sol=p;
            return;
        }
        if(root==q)
        {
            sol=q;
            return;
        }

        if(root->val > p->val && root->val > q->val)
            foo(root->left,p,q,sol);
        else if(root->val < p->val && root->val < q->val)
            foo(root->right,p,q,sol);
        else
        {
            sol=root;
            return;
        }
        

    }

public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        TreeNode* sol=new TreeNode(1);
        foo(root,p,q,sol);

        return sol;
        
    }
};
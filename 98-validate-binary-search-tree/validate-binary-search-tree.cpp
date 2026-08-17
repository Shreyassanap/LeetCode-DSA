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

void inorder(TreeNode* ptr,vector<int>&sol)
{
    if(ptr==NULL)
        return;
    
    inorder(ptr->left,sol);
    sol.push_back(ptr->val);
    inorder(ptr->right,sol);
}

public:
    bool isValidBST(TreeNode* root) {

        vector<int>sol;

        inorder(root,sol);

        for(int i=0;i<sol.size()-1;i++)
        {
            if(sol[i]>=sol[i+1])
                return false;
        }

        return true;

        
    }
};
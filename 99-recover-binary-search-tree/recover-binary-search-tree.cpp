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

    void foo(TreeNode* root,vector<TreeNode*>&sol)
    {
        if(root==NULL)
            return;
        
        foo(root->left,sol);
        sol.push_back(root);
        foo(root->right,sol);
    }
public:
    void recoverTree(TreeNode* root) {

        vector<TreeNode*>sol;

        foo(root,sol);
        TreeNode* temp1=NULL;
        TreeNode* temp2=NULL;
        for(int i=0;i<sol.size()-1;i++)
        {
            if(sol[i]->val>sol[i+1]->val)
            {
                if(temp1==NULL)
                {
                    temp1=sol[i];
                    temp2=sol[i+1];
                }
                else
                {
                    temp2=sol[i+1];

                }
            }

        }

        int temp=temp1->val;
        temp1->val=temp2->val;
        temp2->val=temp;

                
    }
};
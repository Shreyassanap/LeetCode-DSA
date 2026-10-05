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
    void bst(TreeNode* root,int val)
    {
        if(val<root->val)
        {
            if(root->left==NULL)
            {
                TreeNode* temp=new TreeNode(val);
                root->left=temp;
            }
            else
                bst(root->left,val);
        }
        if(val>root->val)
        {
            if(root->right==NULL)
            {
                TreeNode* temp=new TreeNode(val);
                root->right=temp;

            }
            else
                bst(root->right,val);
        }

    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
    
        TreeNode* root=new TreeNode(preorder[0]);

        for(int i=1;i<preorder.size();i++)
        {
            bst(root,preorder[i]);

        }

        return root;
        
    }
};
class Solution {
    int foo(TreeNode* root,int&maxi)
    {
        if(root==NULL)
            return 0;
        
        int left=foo(root->left,maxi);
        int right=foo(root->right,maxi);

        maxi=max(maxi,left+right);
        
        return max(left,right)+1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {

        int maxi=0;
        foo(root,maxi);
        return maxi;      
    }
};
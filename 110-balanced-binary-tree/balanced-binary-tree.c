/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int foo(struct TreeNode* ptr)
{
    if(ptr==NULL)
        return 0;
    int lh=foo(ptr->left);
    if(lh<0)
        return -1;    
    int rh=foo(ptr->right);
    if(rh<0)
        return -1;
    int res=lh-rh;
    if(res<0)
        res=-1*res;
    if(res>1)
        return -1;
    return 1+(lh>rh?lh:rh);    
}

bool isBalanced(struct TreeNode* root) {
    int res=foo(root);
    if(res<0)
        return false;
    return true;
}
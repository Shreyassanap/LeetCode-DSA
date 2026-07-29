/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int max=0;

int foo(struct TreeNode* ptr)
{
    if(ptr==NULL)
        return 0;
    
    int lh=foo(ptr->left);
    int rh=foo(ptr->right);

    if(max<lh+rh)
        max=lh+rh;

    return 1+(lh>rh?lh:rh);
}
int diameterOfBinaryTree(struct TreeNode* root) {
    max=0;
    foo(root);
    return max;

}
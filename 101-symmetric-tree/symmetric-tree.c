/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int foo(struct TreeNode* ptr1,struct TreeNode* ptr2)
{
    if(ptr1==NULL && ptr2==NULL)
        return 0;

    if(ptr1==NULL || ptr2==NULL)
        return -1;

    if(ptr1->val!=ptr2->val)
        return -1;
    int flag;
    flag=foo(ptr1->right,ptr2->left);
    if(flag==-1)
        return -1;
    flag=foo(ptr1->left,ptr2->right);
    if(flag==-1)
        return -1;
    return 0;
}
bool isSymmetric(struct TreeNode* root) {
    int ans=foo(root->left,root->right);

    if(ans==-1)
        return false;
    return true;


    
    
}
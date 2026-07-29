/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int foo(struct TreeNode *p,struct TreeNode* q)
{
    if(p==NULL || q==NULL)
    {
        if(p==NULL && q==NULL)
            return 0;
        else
        {
            return -1;
        }
    }


    if(p->val==q->val)
    {
        int flag=foo(p->left,q->left);
        if(flag!=-1)
            flag=foo(p->right,q->right);
        return flag;
    }
    else
        return -1;
    
    return 0;
    
}


bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    int ans=foo(p,q);
    if(ans==-1)
        return false;
    return true;    
}
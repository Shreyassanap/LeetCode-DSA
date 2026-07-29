/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {

    if(root==NULL)
        {
            struct TreeNode* current=(struct TreeNode*)calloc(1,sizeof(struct TreeNode));
            current->val=val;
            return current;

        }
    struct TreeNode* ptr=root;
    struct TreeNode* prev;
    while(ptr!=NULL)
    {
        prev=ptr;
        if(ptr->val==val)
            return root;
        if(ptr->val>val)
            ptr=ptr->left;
        else
            ptr=ptr->right;
    }

    struct TreeNode* current=(struct TreeNode*)calloc(1,sizeof(struct TreeNode));
    current->val=val;
    
    if(prev->val>val)
        prev->left=current;
    else
        prev->right=current;
    return root;
    
}
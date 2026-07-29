/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
 if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }
    int* ptr=(int*)malloc(100*sizeof(int));
    struct TreeNode* stack[10];
    int top=0,i=0;
    stack[top]=root;
    while(top!=-1)
    {
        struct TreeNode* val=stack[top];
        ptr[i]=val->val;
        top--;
        i++;

        if(val->right!=NULL)
            stack[++top]=val->right;

        if(val->left!=NULL)
            stack[++top]=val->left;

        
    }

    *returnSize=i;
    return ptr;
    
}
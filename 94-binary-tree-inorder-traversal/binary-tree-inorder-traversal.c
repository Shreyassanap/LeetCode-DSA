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
void inorder(int *arr,struct TreeNode *ptr,int* val)
{
    if(ptr==NULL)
    return;

    inorder(arr,ptr->left,val);
    arr[*val]=ptr->val;
    *val=*val+1;
    inorder(arr,ptr->right,val);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int val=0;
    int*ptr=(int*)malloc(100*sizeof(int));
    inorder(ptr, root,&val);

    *returnSize=val;

    return ptr;
}
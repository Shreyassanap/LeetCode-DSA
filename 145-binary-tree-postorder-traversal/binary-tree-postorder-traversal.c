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
int* postorderTraversal(struct TreeNode* root, int* returnSize) {

    if(root==NULL){
        *returnSize=0;
        return 0;
    }

    int *ptr=(int*)malloc(100*sizeof(int));
    struct TreeNode* stack1[100];
    struct TreeNode* stack2[100];
    int top1=-1,top2=-1;
    stack1[++top1]=root;
    while(top1!=-1)
    {
        struct TreeNode* current=stack1[top1--];
        stack2[++top2]=current;

        if(current->left!=NULL)
            stack1[++top1]=current->left;

        if(current->right!=NULL)
            stack1[++top1]=current->right;
    }

    int i=0;
    while(top2!=-1){
        int val=stack2[top2--]->val;
        ptr[i++]=val;
    }
    *returnSize=i;
    return ptr;
}
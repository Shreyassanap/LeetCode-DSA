/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* deleteNode(struct TreeNode* root, int key) {

    if(root==NULL)
        return root;

    struct TreeNode* ptr=root;

    if(ptr->val==key)
    {
        if(ptr->left!=NULL)
        {
            root=ptr->left;
            struct TreeNode* temp=root;
            while(temp->right!=NULL)
                temp=temp->right;
            temp->right=ptr->right;
            return root;
        }
        else
            return ptr->right;
    }

    struct TreeNode* prev;
    int flag=0;
    while(ptr!=NULL)
    {
        prev=ptr;
        if(ptr->val<key)
            ptr=ptr->right;
        else
            ptr=ptr->left;

        if(ptr!=NULL && ptr->val==key)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        if(prev->left==ptr)
        {
            if(ptr->left!=NULL)
            {
                prev->left=ptr->left;
                prev=prev->left;
                while(prev->right!=NULL)
                    prev=prev->right;
                prev->right=ptr->right;
            }
            else
                prev->left=ptr->right;
        }
        else
        {
            if(ptr->left!=NULL)
            {
                prev->right=ptr->left;
                prev=prev->right;
                while(prev->right!=NULL)
                    prev=prev->right;
                prev->right=ptr->right;
            }
            else
                prev->right=ptr->right;
        }
    }
    free(ptr);
    return root;
}
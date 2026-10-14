
class Solution {
    TreeNode* prev = nullptr;
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;

    void foo(TreeNode* root) {
        if (root == nullptr)
            return;

        foo(root->left);

        if (prev != nullptr && prev->val > root->val) {
            if (first == nullptr)
                first = prev;

            second = root;
        }

        prev = root;

        foo(root->right);
    }

public:
    void recoverTree(TreeNode* root) {
        foo(root);

        int temp = first->val;
        first->val = second->val;
        second->val = temp;
    }
};

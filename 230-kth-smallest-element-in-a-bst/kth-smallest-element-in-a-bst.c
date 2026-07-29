int kthSmallest(struct TreeNode* root, int k) {
    struct TreeNode* stack[1000];  // adjust size as needed
    int top = -1;

    while (1) {
        // go to leftmost node
        while (root != NULL) {
            stack[++top] = root;
            root = root->left;
        }

        if (top < 0)
            return -1; // k is larger than total nodes

        root = stack[top--]; // pop node

        if (--k == 0)
            return root->val;

        root = root->right; // move to right subtree
    }
}

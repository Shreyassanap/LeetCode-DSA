class BSTIterator {
public:
    stack<TreeNode*> st;

    BSTIterator(TreeNode* root) {
        while(root != NULL) {
            st.push(root);
            root = root->left;
        }
    }
    
    int next() {
        TreeNode* temp = st.top();
        st.pop();

        int ans = temp->val;

        temp = temp->right;

        while(temp != NULL) {
            st.push(temp);
            temp = temp->left;
        }

        return ans;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};
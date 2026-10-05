class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {

        queue<pair<TreeNode*,unsigned long long>>q;

        if(root==NULL)
            return 0;
        
        pair<TreeNode*,unsigned long long>p;
        p.first=root;
        p.second=1;
        q.push(p);

        unsigned long long maxi=0;
        
        while(!q.empty())
        {
            int n=q.size();
            unsigned long long first=q.front().second;
            unsigned long long last=first;

            for(int i=0;i<n;i++)
            {
                last=q.front().second;

                if(q.front().first->left!=NULL)
                {
                    pair<TreeNode*,unsigned long long>pq;
                    pq.first=q.front().first->left;
                    pq.second=2*(q.front().second-1)+1;
                    q.push(pq);
                }

                if(q.front().first->right!=NULL)
                {
                    pair<TreeNode*,unsigned long long>pq;
                    pq.first=q.front().first->right;
                    pq.second=2*(q.front().second-1)+2;
                    q.push(pq);
                }

                q.pop();
            }

            maxi=max(maxi,last-first+1);
        }

        return maxi;
    }
};
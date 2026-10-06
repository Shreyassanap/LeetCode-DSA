/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {

        unordered_map<int,int>mpp;

        queue<TreeNode*>q;

        q.push(root);


        while(!q.empty())
        {
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                if(q.front()->left!=NULL)
                    q.push(q.front()->left);
                if(q.front()->right!=NULL)
                    q.push(q.front()->right);

                int num=q.front()->val;

                if(mpp.find(k-num)!=mpp.end())
                    return true;
                mpp[num]++;         

                q.pop();     
                

            }

            
        }

        return false;
        
    }
};
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

void foo(int&sol,TreeNode* ptr,int sum)
{
    if(ptr==NULL)
        return;
    int num=ptr->val;
    sum=2*sum + num;

    if(ptr->left==ptr->right)
    {
        sol=sol+sum;
        cout<<sum<<"\n";
        sum=0;
        return;
    }

    foo(sol,ptr->left,sum);
    foo(sol,ptr->right,sum);

}
class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {

        int sol=0;
        foo(sol,root,0);

        return sol;
        
    }
};
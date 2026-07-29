class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left=0;
        int right=0;
        int sol=0;
        while(right!=nums.size())
        {
           
            while(right!=nums.size() && nums[right]==1){
                right++;
            }

            if(sol<right-left)
                sol=right-left;

            if(right!=nums.size() && k!=0 && nums[right]==0){
                k--;
                right++;
            }
            else
            {
                if(nums[left]==0)
                    k++;
                left++;
            }

            if(sol<right-left)
                sol=right-left;

        }

        return sol;
        
    }
};
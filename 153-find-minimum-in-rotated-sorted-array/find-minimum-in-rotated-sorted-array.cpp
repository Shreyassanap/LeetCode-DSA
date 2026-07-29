class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int min=INT_MAX;
        while(low<=high)
        {
            int mid=(high-low)/2 +low;
            if(nums[low]<=nums[mid])
            {
                if(min>nums[low])
                    min=nums[low];
                low=mid+1;
            }
            else
            {
                if(min>nums[mid])
                    min=nums[mid];
                high=mid-1;
            }
        }

        return min;
        
    }
};
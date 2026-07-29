class Solution {
public:

    int lowerhalf(int low, int high, int target, const vector<int>& nums)
    {
        int ans = -1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                ans = mid;
                high = mid - 1; // go left
            }
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return ans;
    }

    int upperhalf(int low, int high, int target, const vector<int>& nums)
    {
        int ans = -1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                ans = mid;
                low = mid + 1; // go right
            }
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        if(nums.empty()) return {-1,-1};

        int n = nums.size();

        int first = lowerhalf(0, n-1, target, nums);
        int last  = upperhalf(0, n-1, target, nums);

        return {first, last};
    }
};

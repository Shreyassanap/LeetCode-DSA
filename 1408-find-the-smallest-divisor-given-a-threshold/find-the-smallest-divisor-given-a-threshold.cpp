class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        sort(nums.begin(), nums.end());

        int low = 1;
        int high = nums[nums.size() - 1];
        int sol = INT_MAX;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int sum = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                int temp = nums[i] / mid;

                if (nums[i] % mid != 0)
                    temp++;

                sum += temp;
            }

            if (sum <= threshold)
            {
                sol = mid;      
                high = mid - 1;  
            }
            else
            {
                low = mid + 1;
            }
        }

        return sol;
    }
};
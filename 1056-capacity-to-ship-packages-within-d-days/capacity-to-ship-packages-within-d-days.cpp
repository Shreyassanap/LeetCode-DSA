class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int high = 0;
        int low = -1;

        for(int i = 0; i < weights.size(); i++)
        {
            high += weights[i];
            low = max(low, weights[i]);
        }

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            int count = 1;
            int sum = 0;

            for(int i = 0; i < weights.size(); i++)
            {
                if(sum + weights[i] <= mid)
                {
                    sum += weights[i];
                }
                else
                {
                    count++;
                    sum = weights[i];
                }
            }

            if(count > days)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }
};
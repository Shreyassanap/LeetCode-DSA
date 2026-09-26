class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        if ((long long)m * k > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int sol = INT_MAX;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            int count = 0;
            int c = 0;

            for (int i = 0; i < bloomDay.size(); i++)
            {
                if (bloomDay[i] <= mid)
                    count++;
                else
                    count = 0;

                if (count == k)
                {
                    c++;
                    count = 0;
                }

                if (c == m)
                    break;
            }

            if (c == m)
            {
                sol = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return sol == INT_MAX ? -1 : sol;
    }
};
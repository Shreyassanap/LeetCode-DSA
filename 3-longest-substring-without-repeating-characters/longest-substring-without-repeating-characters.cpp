class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int sol = 0;

        int left = 0;
        int right = 0;

        unordered_map<char, int> mpp;

        while (right < s.length())
        {
            mpp[s[right]]++;

            while (mpp[s[right]] > 1)
            {
                mpp[s[left]]--;
                left++;
            }

            sol = max(sol, right - left + 1);

            right++;
        }

        return sol;
    }
};
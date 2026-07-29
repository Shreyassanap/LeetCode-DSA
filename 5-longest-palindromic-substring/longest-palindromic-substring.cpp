class Solution {
public:

    void palindrome(int left, int right, string &sol, int &count, const string &s)
    {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }

        left++;
        right--;

        int len = right - left + 1;
        if (len > count) {
            sol = s.substr(left, len);
            count = len;
        }
    }

    string longestPalindrome(string s) {
        string sol;
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            // odd length
            palindrome(i - 1, i + 1, sol, count, s);

            // even length
            palindrome(i, i + 1, sol, count, s);
        }
        return sol;
    }
};

class Solution {
public:
    string smallestPalindrome(string s) {

        unordered_map<char,int> mpp;

        for(char c : s)
            mpp[c]++;

        string left = "";
        string mid = "";

        for(char c = 'a'; c <= 'z'; c++)
        {
            left.append(mpp[c] / 2, c);

            if(mpp[c] % 2 == 1)
                mid += c;
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};
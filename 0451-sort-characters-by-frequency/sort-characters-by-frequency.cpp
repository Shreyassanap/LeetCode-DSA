class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mpp;

        for (int i = 0; i < s.length(); i++) {
            mpp[s[i]]++;
        }

        vector<pair<char, int>> vec(mpp.begin(), mpp.end());

        sort(vec.begin(), vec.end(),
             [](pair<char, int> &a, pair<char, int> &b) {
                 return a.second > b.second;
             });

        string ans;

        for (int i = 0; i < vec.size(); i++) {
            while (vec[i].second > 0) {
                ans += vec[i].first;
                vec[i].second--;
            }
        }

        return ans;
    }
};
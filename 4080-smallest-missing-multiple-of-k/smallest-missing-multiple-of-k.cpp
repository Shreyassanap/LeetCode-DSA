class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;

        for (int num : nums) {
            st.insert(num);
        }

        int i = 1;

        while (true) {
            if (st.find(k * i) == st.end()) {
                return k * i;
            }
            i++;
        }
    }
};
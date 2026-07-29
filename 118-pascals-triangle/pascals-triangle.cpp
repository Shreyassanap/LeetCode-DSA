class Solution {
    long long combination(int r, int n) {
    if (r == 0 || r == n)
        return 1;

    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - r + i) / i;
    }
    return res;
}

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>sol;
        for(int i=0;i<numRows;i++)
        {
            vector<int>temp;
            for(int j=0;j<=i;j++)
            {
                temp.push_back(combination(j,i));
            }
            sol.push_back(temp);
        }
        return sol;
    }
};
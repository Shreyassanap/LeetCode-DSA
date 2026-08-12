class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int>sol;
        long long ans=1;
        for(int i=0;i<=rowIndex;i++)
        {
            sol.push_back(ans);
            ans=(ans*((rowIndex-i))/(i+1));
        }

        return sol;


        
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());
        vector<vector<int>>sol;
        int j=0;
        sol.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=sol[j][1])
            {
                sol[j][1]=max(intervals[i][1],sol[j][1]);
            }
            else
            {
                j++;
                sol.push_back(intervals[i]);
            }

        }

        return sol;
        

        
    }
};
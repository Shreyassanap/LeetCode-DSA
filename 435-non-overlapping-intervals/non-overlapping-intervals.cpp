class Solution {
    static bool camp(vector<int> a,vector<int>b)
    {
        return a[1]<b[1];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),camp);
        int high=INT_MIN;
        int count=0;

        for(int i=0;i<intervals.size();i++)
        {
            if(high<=intervals[i][0])
            {
                high=intervals[i][1];
            }
            else
                count++;

        }

        return count;
        
    }
};
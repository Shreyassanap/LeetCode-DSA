class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sol=0;
        for(int i=0;i<points.size()-1;i++)
        {
            int a=points[i][0]-points[i+1][0];
            a=abs(a);

            int b=points[i][1]-points[i+1][1];
            b=abs(b);

            if(b>a)
                a=b;
            sol=sol+a;     
        }
        return sol;
    }
};
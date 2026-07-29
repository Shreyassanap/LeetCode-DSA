class Solution {
public:
    int maxArea(vector<int>& height) {

        if(height.size()==0)
            return 0;

        int i=0,j=height.size()-1,sol=0;

        while(i<j)
        {
            
            int ans=(j-i)*(min(height[i],height[j]));
            if(sol<ans)
                sol=ans;
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return sol;
    }
};
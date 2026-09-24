class Solution {
public:
    int trap(vector<int>& height) {
        
        int left=0,right=height.size()-1;
        int max_left=0,max_right=0,sol=0;

        while(left < right)
        {
            max_left=max(max_left,height[left]);
            max_right=max(max_right,height[right]);

            if(max_left>max_right)
                sol+=max_right-height[right--];
            else
                sol+=max_left-height[left++];
        }

        return sol;
    }
};
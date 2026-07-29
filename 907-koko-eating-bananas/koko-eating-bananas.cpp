class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int m=*max_element(piles.begin(),piles.end());
        int ans=0;
        int low=1,high=m,mid=0;

        while(low<=high)
        {
            mid = (low+high)/2;
            long sol=0;
            for(int i=0;i<piles.size();i++)
            {
                int div=piles[i]/mid;
                if(piles[i]%mid)
                    div++;
                sol=sol+div;
            }

            if(sol<=h){
                high=mid-1;
                ans=mid;
            }
            else
                low=mid+1;
        }

        return ans;


        
        
    }
};
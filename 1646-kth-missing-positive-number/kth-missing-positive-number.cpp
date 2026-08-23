class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1,j=0;
        while(k)
        {
            if(j!=arr.size() && i==arr[j] )
            {
                j++;
            }
            else
                k--;

            if(k==0)
                return i;
            
            i++;
            
        }

        return 0;
        
    }
};
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int> sol;

        for(int i=0;i<nums.size();i++)
        {
            int j=nums.size()-1;
            int num=nums[i];
            int count=i;
            while(j)
            {
                count++;
                if(count==nums.size())
                    count=0;
                if(nums[count]>num)
                {
                    //cout<<"hey";
                    sol.push_back(nums[count]);
                    break;
                }
               
                j--;
            }

            if(j==0)
                sol.push_back(-1);
        }
        return sol;
    }
   
};
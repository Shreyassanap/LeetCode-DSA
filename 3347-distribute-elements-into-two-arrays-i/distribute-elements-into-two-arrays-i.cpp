class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        int last1=nums[0];
        int last2=nums[1];

        nums.erase(nums.begin());
       
        nums.erase(nums.begin());
       
        while(nums.size())
        {
            if(last1>last2)
            {
                arr1.push_back(nums[0]);
                last1=nums[0];
                nums.erase(nums.begin());
            }
            else
            {
                arr2.push_back(nums[0]);
                last2=nums[0];
                nums.erase(nums.begin());
            }

            

        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());

        return arr1;
    }
};
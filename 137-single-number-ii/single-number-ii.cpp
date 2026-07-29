class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int num1=0,num2=0;

        for(int i=0;i<nums.size();i++)
        {
            num1=(num1^nums[i])&(~num2);
            num2=(num2^nums[i])&(~num1);
        }

        return num1;
        
    }
};
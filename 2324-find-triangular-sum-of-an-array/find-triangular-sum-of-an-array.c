int triangularSum(int* nums, int numsSize) {

    if(numsSize==1)
        return nums[0];
    
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=0;j<numsSize-1-i;j++)
        {
            nums[j]=nums[j]+nums[j+1];
            nums[j]=nums[j]%10;
        }
    }

    return nums[0];
    
}
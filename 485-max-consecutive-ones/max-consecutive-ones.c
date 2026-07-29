int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count=0,val=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=1)
        {
            if(val>count)
                count=val;
            val=0;
        }
        else
            val++;
    }

    if(val>count)
        return val;
    return count;
    
}
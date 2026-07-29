void moveZeroes(int* nums, int numsSize) {

    int j=0;
    int *ptr=(int*)calloc(numsSize,sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            ptr[j]=nums[i];
            j++;
        }
    }

    for(int i=j;i<numsSize;i++)
    {
        ptr[i]=0;
    }

    for(int i=0;i<numsSize;i++)
    {
        nums[i]=ptr[i];
    }
    
}
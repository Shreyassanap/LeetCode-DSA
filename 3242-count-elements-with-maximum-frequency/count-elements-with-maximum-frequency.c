int maxFrequencyElements(int* nums, int numsSize) {

    if(numsSize==0)
    return 0;

    if(numsSize==1)
    return 1;
    
    int *ptr=(int*)calloc(101,sizeof(int));
    int max=0,pos=0;
    for(int i=0;i<numsSize;i++)
    {
        ptr[nums[i]]=ptr[nums[i]] +1;
        if(ptr[nums[i]]>max)
        {
            max=ptr[nums[i]];
        }
    }

    for(int i=0;i<numsSize;i++)
    {              
        if(max==ptr[nums[i]])
        {
            pos++;
        }
    }
    free(ptr);
    return pos;

    
    
}
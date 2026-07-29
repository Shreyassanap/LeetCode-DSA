void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    int *ptr=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
        ptr[i]=nums[(i+(numsSize-k))%numsSize];
    
    for(int i=0;i<numsSize;i++)
        nums[i]=ptr[i];

    free(ptr);
    
}
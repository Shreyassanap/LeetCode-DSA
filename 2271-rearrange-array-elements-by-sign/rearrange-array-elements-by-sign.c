/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {

    int *ptr =(int*)malloc(numsSize*sizeof(int));
    int k=0,j=1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>0)
        {
            ptr[k]=nums[i];
            k=k+2;
        }
        else
        {
            ptr[j]=nums[i];
            j=j+2;
        }
    }

    *returnSize=numsSize;
    return ptr;

}
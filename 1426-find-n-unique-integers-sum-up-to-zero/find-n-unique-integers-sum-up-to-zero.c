/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {

    int *ptr=(int*)calloc(n,sizeof(int));

    int steps=n/2;
    int j=0;
    for(int i=1;i<=steps;i++)
    {
        ptr[j++]=i;
        ptr[j++]=-i;       
    }
    *returnSize=n;
    return ptr;
    
}
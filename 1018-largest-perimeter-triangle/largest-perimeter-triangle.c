#include <stdlib.h>

// Comparator for qsort
int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int largestPerimeter(int* nums, int numsSize) {
    // Replace bubble sort with qsort
    qsort(nums, numsSize, sizeof(int), cmp);

    int i = numsSize - 1;
    while (i >= 2) {
        if (nums[i] < nums[i-1] + nums[i-2])
            return nums[i] + nums[i-1] + nums[i-2];
        i--;
    }

    return 0;
}

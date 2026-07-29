#include <stdlib.h>

// Comparison function for qsort
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int binarySearch(int* potions, int potionsSize, long long target) {
    int low = 0, high = potionsSize - 1, ans = potionsSize;  // if none found
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (potions[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int* successfulPairs(int* spells, int spellsSize, int* potions, int potionsSize, long long success, int* returnSize) {
    // Sort potions
    qsort(potions, potionsSize, sizeof(int), cmp);

    int* result = (int*)malloc(spellsSize * sizeof(int));

    for (int i = 0; i < spellsSize; i++) {
        long long required = (success + spells[i] - 1) / spells[i];  // ceil(success/spell)
        int idx = binarySearch(potions, potionsSize, required);
        result[i] = potionsSize - idx;
    }

    *returnSize = spellsSize;
    return result;
}

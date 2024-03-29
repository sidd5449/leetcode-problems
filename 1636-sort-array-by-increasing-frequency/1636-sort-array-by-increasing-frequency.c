

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int count[201];

int cmp(const void *a, const void *b){
    if(count[*(int*)a + 100] != count[*(int*)b + 100])
        return count[*(int*)a + 100] > count[*(int*)b + 100];
    else
        return *(int*)a < *(int*)b;
}

int* frequencySort(int* nums, int numsSize, int* returnSize){
    int i, l = numsSize;
    memset(count, 0, sizeof(count));
    
    for(i = 0; i < l; i++){
        count[nums[i] + 100]++;
    }
    
    qsort(nums, l, sizeof(int), cmp);
    *returnSize = l;
    
    return nums;
}
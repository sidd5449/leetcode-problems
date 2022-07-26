

int findPeakElement(int* nums, int numsSize){
    if (numsSize == 1) return 0;
    if (numsSize == 2) {
        if (nums[0] < nums[1]) return 1;
    }
    
    for (int i = 0; i < numsSize - 2; i++) {
        for (int j = i + 1; j < numsSize - 1; j++) {
            if (nums[i] < nums[j] && nums[j + 1] < nums[j]) return j;
        }
    }
    
    if (nums[numsSize-1] > nums[numsSize-2]) return numsSize - 1;
    
    return 0;
    
}
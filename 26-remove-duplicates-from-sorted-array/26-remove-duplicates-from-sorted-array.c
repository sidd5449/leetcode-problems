

int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0 || numsSize == 1)
        return numsSize;
  
    int temp[numsSize];
    int j = 0;
    for (int i = 0; i < numsSize - 1; i++)
        if (nums[i] != nums[i + 1])
            temp[j++] = nums[i];
  
    temp[j++] = nums[numsSize - 1];
  
    for (int i = 0; i < j; i++)
        nums[i] = temp[i];
  
    return j;
}
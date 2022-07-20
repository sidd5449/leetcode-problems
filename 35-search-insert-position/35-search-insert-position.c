int searchInsert(int* nums, int numsSize, int target)
{
    if(!numsSize)
        return 0;
    int i = 0, j = numsSize - 1,k;
    while (i<=j)
    {
        k = (i+j)/2;
        if (target == nums[k])
            return k;
        else
            if (target < nums[k])
                j = k-1;
            else
                i = k+1;    
    }
    return i<j ? j:i;
}
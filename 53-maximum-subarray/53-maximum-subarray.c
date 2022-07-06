int maxSubArray(int* nums, int numsSize)
{
    int max = -10001;
    int tmpSum = 0, maxSum = 0;
    for(int i = 0 ; i < numsSize ; i++)
    {
        if(nums[i] > max)
            max = nums[i];
        tmpSum += nums[i];
        if(tmpSum < 0)
            tmpSum = 0;
        else if(tmpSum > maxSum)
            maxSum = tmpSum;
    }
    
    if(maxSum == 0)
        return max;
    
    return maxSum;
}
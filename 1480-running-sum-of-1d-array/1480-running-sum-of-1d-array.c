/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int* ans=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int sum=0;
    for(int i=0; i<numsSize; i++){
        sum += nums[i];
        
        ans[i] = sum;
    }
    return ans;
    
}
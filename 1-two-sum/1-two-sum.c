int* twoSum(int* nums, int numsSize, int target, int* returnSize){

int i,j,*res=NULL; *returnSize=2;

    for (i=0; i<numsSize; i++) {
        for(j=i+1;j<numsSize;j++) {
            if ((nums[i]+nums[j]) == target) {
               res = (int*)malloc((*returnSize)*(sizeof(int)));
               
                *res =i; /*Since each input would have exactly one pair, no additional checks are required. */
                *(res+1) =j;
            }
        }
    }

return res;
}
int singleNumber(int* nums, int numsSize){

    int i,j;
    j=nums[0];
        for(i=0;i<numsSize-1;i++){            
            j^=nums[i+1];            
        }
    
    
return j;
}
bool divideArray(int* nums, int numsSize){

    int arr[501] = {0};
    for(int i=0; i<numsSize; i++){
        arr[nums[i]]++;
    }

    for(int i=0; i<501; i++){
        if(arr[i] %2 != 0){
            return false;
        }
    }
    return true;
}
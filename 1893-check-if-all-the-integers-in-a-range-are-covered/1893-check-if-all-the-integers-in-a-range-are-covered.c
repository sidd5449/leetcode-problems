

bool isCovered(int** ranges, int rangesSize, int* rangesColSize, int left, int right){
    int count=0;
    int diff = right-left+1;
    for (int i = left; i <= right; i++) {
        for (int j = 0; j < rangesSize; j++) {
            if (i >= ranges[j][0] && i <= ranges[j][1]) {
                count++;
                break;
            }
        }
    }
    if (count == diff){
        return true;
    }
    else{
        return false;
    }
    return 0;
    
}
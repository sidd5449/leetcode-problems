

int diagonalSum(int** mat, int matSize, int* matColSize){
    int i;
    int sum=0;
    
    for(i=0; i<*matColSize; i++ ){
        sum += mat[i][i] +mat[i][matSize-i-1];
    }
    if(matSize%2 ==0){
        return sum;
    }
    return sum-mat[matSize/2][matSize/2];
    
}
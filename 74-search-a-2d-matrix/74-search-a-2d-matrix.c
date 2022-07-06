bool searchMatrix(int** M, int m, int* n, int target){
    int i ,j;
    i = 0;
    j = *n * m - 1;
    while( i <= j ){
        int mid = (i + j) / 2;
        int row ,col;
        row = mid / *n;
        col = mid % *n;
        if(M[row][col] < target) i = mid + 1;
        else if(M[row][col] > target) j = mid - 1;
        else return true;
    }
    return false;
}
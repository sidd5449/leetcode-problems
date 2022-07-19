

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    
    int prev = 0; 
    int k=0, p=0;
    int ** res = (int **)malloc(sizeof(int *) * numRows);
    int i;
    for (i=0; i < numRows; i++)
    {
        res[i] = (int *)malloc(sizeof(int) *(i+1));
    }
    *returnColumnSizes = (int *)malloc(sizeof(int) * numRows);
    
    res[0][0] = 1;
    returnColumnSizes[0][0] = 1;
    
    for (i=1; i < numRows; i++)
    {
        k=0;prev=0;p=0;
        while (p < i)
        {
            res[i][k] = prev + res[i-1][p];
            k++;
            prev = res[i-1][p];
            if (p == i-1)
            {
                res[i][k] = res[i-1][p] + 0;
            }
            p++;
        }
        returnColumnSizes[0][i] = i+1;
    }

    *returnSize = numRows;
    return &res[0];
}
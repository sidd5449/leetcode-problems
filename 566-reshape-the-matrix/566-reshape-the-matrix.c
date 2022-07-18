#include <stdlib.h>

int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
    if (matSize * (*matColSize) != r * c) {
        *returnSize = matSize;
        *returnColumnSizes = matColSize;
        return mat;
    }

    *returnColumnSizes = malloc(sizeof(int) * r);
    int** newMat = malloc(sizeof(int*) * r);
    for (int i = 0; i < r; i++) {
        newMat[i] = malloc(sizeof(int) * c);
        returnColumnSizes[0][i] = c;
    }

    int row = 0;
    int col = 0;

    for (int i = 0; i < matSize; i++) {
        for (int j = 0; j < *matColSize; j++) {
            if (col == c) {
                row++;
                col = 0;
            }
            newMat[row][col] = mat[i][j];
            col++; 
        }
    }
    
    **returnColumnSizes = c;
    *returnSize = r;
    return newMat;
}
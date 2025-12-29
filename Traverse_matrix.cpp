/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include <stdbool.h>

bool valid(int x,int y,int rows,int cols){
    
    return (x>=0 && y>=0 && x<rows && y<cols);
}

int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize) {
    int rows = matSize;
    int cols = matColSize[0];
    int *result = malloc((rows*cols)*sizeof(int));

    int d = rows+cols-1;
    int k=0;

    for(int i=0;i<d;i++){

        if(i%2==0){ // even diagonal.
        for(int x =  (i < rows ? i : rows - 1);x>=0;x--){
            int y= i-x;
            if(valid(x,y,rows,cols)){
            result[k++]  = mat[x][y];
            }
            }
        
        }

        else{ // odd diagonal.
            for(int x= 0; x <= (i < rows ? i : rows - 1);x++){
                int y= i-x;
                if(valid(x,y,rows,cols)){
                result[k++] = mat[x][y];
                }

            }
        }
    }
    *returnSize = k;
    return result;
}
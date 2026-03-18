#include <stdio.h>
#include <stdbool.h>
#define n 3
#define m 3
#define DELETED 0 

void delete_negative_rows_and_cols(int imax,int jmax,int mat[imax][jmax]);

int main()
{
    
    int matrix[n][m] = {
    {-1,-2,-3},
    {4,-5,-6},
    {-7,-8,-9}};
    
    delete_negative_rows_and_cols(n,m,matrix);
    
    return 0;
}

void delete_negative_rows_and_cols(int imax,int jmax,int mat[imax][jmax]){
    
    bool cols_to_delete[jmax];
    bool rows_to_delete[imax];
    
    
    for(int i = 0;i < imax;i++){
        rows_to_delete[i] = true;
    }
    
    for(int j = 0;j < jmax;j++){
        cols_to_delete[j] = true;
    }
    
    // ստուգում ենք դրական կամ զրո դեպքերը
    for(int i = 0;i < imax;i++){
        for(int j = 0;j < jmax;j++){
            if(mat[i][j] >= 0){
                // չջնջվող տողերը և սյուները
                rows_to_delete[i] = false;
                cols_to_delete[j] = false;
            }
        }
    }
    
    
    for(int i = 0;i < imax;i++)
    {
        for(int j = 0;j < jmax;j++)
        {
            if(rows_to_delete[i] || cols_to_delete[j])
            {
                // այն տարրերը որոնք պատկանում էին ջնջվող սյուներին կամ տողերին 0 ենք դարձնում
                mat[i][j] = DELETED;
            }
        }
    }
    
    // մատրցը տողերը և սյուները ջնջելուց հետո 
    printf("մատրցը տողերը և սյուները ջնջելուց հետո:\n");
    
    for(int i = 0;i < imax;i++){
        for(int j = 0;j < jmax;j++){
            
                printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}


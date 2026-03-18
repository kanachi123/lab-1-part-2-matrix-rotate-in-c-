//491.
#include <stdio.h>
#define m 3
#define n 3

void find_maxindex(int *maxrow,int *maxcol,int matrix[m][n]);

int main(){
    
    int matrix[m][n];
    int maxrow,maxcol;
    int temp;
    
    printf("nermuceq matrici tarerry\nmecaguyn ev pokraguyn tarery petq e linen miaky\n");
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    find_maxindex(&maxrow,&maxcol,matrix);
    
    for(int j = 0; j < n; j++)
    {
        temp = matrix[0][j];
        matrix[0][j] = matrix[maxrow][j];
        matrix[maxrow][j] = temp;
    }

    for (int i = 0; i < m; i++) {
        temp = matrix[i][0];
        matrix[i][0] = matrix[i][maxcol];
        matrix[i][maxcol] = temp;
    }
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            printf("%d ",matrix[i][j]);
        }
    }
    return 0;
}
void find_maxindex(int *maxrow,int *maxcol,int matrix[m][n])
{
    int max = matrix[0][0];
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(max < matrix[i][j])
            {
                *maxrow = i;
                *maxcol = j;
            }
        }
        
    }
}

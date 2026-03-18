//493.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 4
#define n 4

void find_index(int *row,int*col,int matrix[m][n]);
void del_row(int row,int matrix[m][n]);
void del_col(int col,int matrix[m][n]);

int main()
{
    int matrix[m][n];
    int row,col;
    
    srand(time(NULL));
    
    printf("matrix before\n");
    for(int i = 0;i < m;i++){
        
        for(int j = 0;j < n;j++)
        {
            matrix[i][j] = rand() % 90 + 10;
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    find_index(&row,&col,matrix);
    del_row(row,matrix);
    del_col(col,matrix);
    
    printf("matrix after\n");
    
    for(int i = 0;i < m - 1;i++){
        
        for(int j = 0;j < n - 1 ;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void find_index(int *row,int*col,int matrix[m][n])
{
    int max = matrix[0][0];
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(max < matrix[i][j])
            {
                max = matrix[i][j];
                *row = i;
                *col = j;
            }
        }
    }
    
}
void del_row(int row,int matrix[m][n])
{
    for(int i = row;i < m-1;i++)
    {
        for(int j = 0;j < n;j++)
        {
            matrix[i][j] = matrix[i + 1][j];
        }
    }
    
    for (int j = 0; j < n; j++)
    {
        matrix[m - 1][j] = 0;
    }
    
}

void del_col(int col,int matrix[m][n])
{
    
    
    for(int i = 0;i < m;i++)
    {
        for(int j = col;j < n - 1;j++)
        {
            matrix[i][j] = matrix[i][j+1];
        }
    }
    for (int j = 0; j < n; j++)
    {
        matrix[j][n - 1] = 0;
    }
}

//492.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 3
#define n 3

void find_maxindex(int *rows,int matrix[m][n]);
void find_minindex(int *rows,int matrix[m][n]);

int main()
{
    int matrix[m][n];
    int row_max;
    int row_min;
    int temp;
    
    srand(time(NULL));
    
    printf("matrix before\n");
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j <n;j++)
        {
            matrix[i][j] = rand()%90+10;
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    find_maxindex(&row_max,matrix);
    find_minindex(&row_min,matrix);
    
    if(row_max == row_min)
    {
        printf("mecaguyn ev pokraguyn arjeqnery gtnvum en nuyn toxi vra\n");
    }
    else
    {
        for(int j = 0;j < n;j++)
        {
            temp = matrix[row_max][j];
            matrix[row_max][j] = matrix[row_min][j];
            matrix[row_min][j] = temp;
        }
    }
    
    printf("matrix after\n");
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j <n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
void find_maxindex(int *rows,int matrix[m][n])
{
    int max = matrix[0][0];
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(max < matrix[i][j])
            {
                max = matrix[i][j];
                *rows = i;
            }
        }
    }
}
void find_minindex(int *rows,int matrix[m][n])
{
    int min = matrix[0][0];
    
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(min > matrix[i][j])
            {
                min = matrix[i][j];
                *rows = i;
            }
        }
    }
}


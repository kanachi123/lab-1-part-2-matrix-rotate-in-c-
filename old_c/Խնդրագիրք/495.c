//495.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 3

void fill_matrix(int matrix[n][2*n]);
void quick_sort(int low,int high,int matrix[n][2*n]);
void print_matrix(int matrix[n][2*n]);

int main()
{
    int matrix[n][2*n];
    printf("matrix before\n");
    fill_matrix(matrix);
    
    quick_sort(0,n-1,matrix);
    
    printf("matrix after\n");
    print_matrix(matrix);

    return 0;
}

void fill_matrix(int matrix[n][2*n])
{
    srand(time(NULL));
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < 2*n;j++)
        {
            matrix[i][j] = rand()%21;
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
void quick_sort(int low,int high,int matrix[n][2*n])
{
    if(low > high)
        return;
        
    int pivot = matrix[(low+high)/2][2*n-1];
    int j = high;
    int i = low;
    
    while(i <= j)
    {
        while(matrix[i][2*n-1] > pivot)
        {
            i++;
        }
        while(matrix[j][2*n-1] < pivot)
        {
            j--;
        }
        if(i <= j)
        {
            for(int k = 0;k < 2*n;k++)
            {
                int tmp = matrix[i][k];
                matrix[i][k] = matrix[j][k];
                matrix[j][k] = tmp;
            }
            i++;
            j--;
        }
        quick_sort(low,j,matrix);
        quick_sort(i,high,matrix);
        
    }
}
void print_matrix(int matrix[n][2*n])
{
    
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < 2*n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
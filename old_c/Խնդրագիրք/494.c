//494.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 3
void fill_matrix(int row,int matrix[row][2*row]);
int quiсk_sort(int low,int high,int matrix[n][2*n]);
void print_matrix(int row,int matrix[row][2*row]);

int main()
{
    
    int matrix[n][2*n];
    
    printf("matrix before\n");
    fill_matrix(n,matrix);
    
    quiсk_sort(0,n-1,matrix);
    
    printf("matrix after\n");
    print_matrix(n,matrix);
    
    return 0;
}
void fill_matrix(int row,int matrix[row][2*row])
{
    srand(time(NULL));
    
    for(int i = 0;i < row;i++){
        
        for(int j = 0;j < 2*n;j++)
        {
            matrix[i][j] = rand()%21;
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
void print_matrix(int row,int matrix[row][2*row]){
    
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < 2*row;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
int quiсk_sort(int low,int high,int matrix[n][2*n])
{
    if(low > high) return 0;
    
    int pivot = matrix[(low+high)/2][0];
    int j = high;
    int i = low;
    
    while(i <= j)
    {
        while(matrix[i][0] < pivot)
        {
            i++;
        }
        while(matrix[j][0] > pivot)
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
    }
    quiсk_sort(low,j-1,matrix);
    quiсk_sort(i,high,matrix);
    
    return 0;
}

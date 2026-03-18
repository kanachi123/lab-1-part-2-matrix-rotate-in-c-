//496.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 3

void sort_diagonal(int matrix[][2*n]);
void fill_matrix(int matrix[][2*n]);
void print_matrix(int matrix[][2*n]);

int main()
{
    int matrix[n][2*n];

    printf("matrix before\n");
    fill_matrix(matrix);

    sort_diagonal(matrix);

    printf("matrix after\n");
    print_matrix(matrix);

    return 0;
}
void fill_matrix(int matrix[][2*n]){
    
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
void sort_diagonal(int matrix[][2*n])
{
    int diagonal[n];

    
    for (int i = 0; i < n; i++)
    {
        diagonal[i] = matrix[i][i];
    }

    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (diagonal[j] > diagonal[j + 1])
            {
                int temp = diagonal[j];
                diagonal[j] = diagonal[j + 1];
                diagonal[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        matrix[i][i] = diagonal[i];
    }
}

void print_matrix(int matrix[][2*n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 3

void fill_matrix(int matrix[][2*n]);
void print_matrix(int matrix[][2*n]);
void quick_matrix(int low,int high,int matrix[][2*n]);

int main()
{
    int matrix[n][2*n];
    
    printf("matrix before\n");
    fill_matrix(matrix);
    
    
    quick_matrix(0,n-1,matrix);
    
    printf("matrix after\n");
    print_matrix(matrix);

    return 0;
}

void fill_matrix(int matrix[][2*n])
{
    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2*n; j++)
        {
            matrix[i][j] = rand()%21;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void quick_matrix(int low,int high,int matrix[][2*n])
{
    if(low > high)
        return;
        
    int i = low;
    int j = high;
    int pivot = matrix[(low+high)/2][(low+high)/2];
    
    while(i < j)
    {
        
        while(matrix[i][i] < pivot)
        {
            i++;
        }
        while(matrix[j][j] > pivot)
        {
            j--;
        }
        
        if(i <= j)
        {
            int temp = matrix[i][i];
            matrix[i][i] = matrix[j][j];
            matrix[j][j] = temp;
            
            i++;
            j--;
        }
    }
    quick_matrix(low,j-1,matrix);
    quick_matrix(i,high-1,matrix);
}

void print_matrix(int matrix[][2*n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2*n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

*/
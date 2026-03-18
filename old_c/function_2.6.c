#include <stdio.h>
#include <stdbool.h>
#define n 3
#define m 3
 
bool is_symmetric(int rows,int cols, int matrix[rows][cols]);
void fill_Array(int rows, int cols,int matrix[rows][cols]);
int main()
{
    
    int matrix[n][m];
    fill_Array(n,m,matrix);
    
    if (is_symmetric(n,m, matrix) == true) 
    {
        printf("մատրիցան սիմետրիկ է \n"); 
    }
    else
    {
        printf("մատրիցան սիմետրիկ չէ \n");
    }
    return 0;
}

bool is_symmetric(int rows,int cols, int matrix[rows][cols])
{
    bool symmetric = true; 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            if (matrix[i][j] != matrix[rows - j - 1][cols - i - 1]) 
            {
                symmetric = false; 
                break; 
            }
        }
        if (!symmetric) 
        {
            break; 
        }
    }
    return symmetric;
}
void fill_Array(int rows, int cols,int matrix[rows][cols]){
    
    printf("ներմուծեք մատրիցի տարրերը\n");
    for(int i = 0;i < rows;i++){
        
        for(int j = 0;j < cols;j++){
            
            scanf("%d",&matrix[i][j]);
        }
        
    }
    
}
